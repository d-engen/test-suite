/**
 * @brief Unit tests for the ATmega328p serial driver.
 */
#include <cstdint>

#include <gtest/gtest.h>

#include "arch/avr/hw_platform.h"
#include "driver/serial/atmega328p.h"
#include "utils/utils.h"

#ifdef TESTSUITE

//! @todo Remove this #ifdef in lecture 3 to enable these tests.
#ifdef LECTURE3

//! @todo Implement tests according to project requirements.
namespace driver
{
namespace
{
/**
 * @brief Serial initialization test.
 * 
 *        Verify that the serial driver is initialized correctly.
 */
TEST(Serial_Atmega328p, Initialization)
{
    //! @todo Test serial initialization.
}

//! @todo Add more tests here!

} // namespace
} // namespace driver.

//! @todo Remove this #endif in lecture 3 to enable these tests.
#endif /** LECTURE3 */

#endif /** TESTSUITE */