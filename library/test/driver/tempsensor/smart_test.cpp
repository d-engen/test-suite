/**
 * @brief Unit tests for the smart temperature sensor.
 */
#include <cstdint>

#include <gtest/gtest.h>

#include "arch/avr/hw_platform.h"
#include "driver/adc/atmega328p.h"
#include "driver/tempsensor/smart.h"
#include "utils/utils.h"

#ifdef TESTSUITE

//! @todo Remove this #ifdef in lecture 1 to enable these tests.
#ifdef LECTURE1

//! @todo Implement tests according to project requirements.
namespace driver
{
namespace
{
/**
 * @brief Smart tempsensor initialization test.
 * 
 *        Verify that the smart tempsensor is initialized correctly.
 */
TEST(TempSensor_Smart, Initialization)
{
    //! @todo Test smart tempsensor initialization.
}

//! @todo Add more tests here!

} // namespace
} // namespace driver.

//! @todo Remove this #endif in lecture 1 to enable these tests.
#endif /** LECTURE1 */

#endif /** TESTSUITE */
