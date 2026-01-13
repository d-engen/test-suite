/**
 * @note Requirements:
 * 
 *       1. Prediction: The sensor shall predict temperature based on the input voltage from the 
 *                      associated pin.
 *       2. Voltage Measurement: The input voltage shall be measured using an A/D converter.
 *       3. Model Usage: The sensor shall use a pre-trained linear regression model for temperature 
 *                       prediction.
 *       4. Initialization Prerequisites:
 *           - The associated pin must be a valid ADC channel.
 *           - The ADC must be initialized.
 *           - The linear regression model must be pre-trained.
 */

 /**
 * @brief Smart temperature sensor implementation.
 */
#include <stdint.h>

//Inkludera ADc interface ml/lin_reg inteface och utility-funktioner
#include "driver/adc/interface.h"       // Contains ADC interface.
#include "driver/tempsensor/smart.h"    // Contains the smart sensor class.
#include "ml/lin_reg/interface.h"       // Contains the liniar regression interface.
#include "utils/utils.h"                // Contains a function to round numbers.

namespace driver
{
namespace tempsensor
{
/**
 * @brief Smart temperature sensor implementation.
 */
class Smart final : public Interface
{
public:
//------------------------------------------------------------------------------
Smart(uint8_t pin, adc::Interface& adc, ml::lin_reg::Interface& linReg) noexcept
    : myAdc{adc}
    , myLinReg{linReg}
    , myPin{pin}
{
    // Enable the ADC if initialization succeded.
    if (isInitialized()) { myAdc.setEnabled(true); }
}

//------------------------------------------------------------------------------
bool Smart::isInitialized() const noexcept
{
    // Return True if the ADC is initialized, the temp sensor pin is a valid ADC channel
    // and the linear regression model trained.
    return myAdc.isInitialized() && myAdc.isChannelValid(myPin) && myLinReg.isTrained(); 
}

//------------------------------------------------------------------------------
int16_t read() const noexcept
{
    // Read the tmeperature if the temp sensor is initialized.
    if (isInitialized())
    {
        // Calculate the input voltage
        const double inputVoltage{myAdc.inputVoltage(myPin)};
        // Predict the temperature based on the input voltage
        const double predictedTemp{myLinReg.predict(inputVoltage)};
        // Predict the temperature rounded to the nearest interger.
        return utils::round<int16_t>(predictedTemp);
    }

    // Return 0 if the temp sensor isn't initialized.
    return 0;
}

};
} // namespace tempsensor
} // namespace driver