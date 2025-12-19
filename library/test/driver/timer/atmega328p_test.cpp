/**
 * @brief Unit tests for the ATmega328p timer driver.
 */
#include <cstdint>

#include <gtest/gtest.h>

#include "arch/avr/hw_platform.h"
#include "driver/timer/atmega328p.h"
#include "utils/utils.h"

#ifdef TESTSUITE

//! @todo Remove this #ifdef in lecture 4 to enable these tests.
#ifdef LECTURE4

//! @todo Implement tests according to project requirements.
namespace driver
{
namespace
{
/**
 * @brief Timer initialization test.
 * 
 *        Verify that the timer circuits are initialized correctly.
 */
TEST(Timer_Atmega328p, Initialization)
{
    //! @todo Test timer initialization.
}

//! @todo Add more tests here!

} // namespace
} // namespace driver.

//! @todo Remove this #endif in lecture 4 to enable these tests.
#endif /** LECTURE4 */

#endif /** TESTSUITE */


