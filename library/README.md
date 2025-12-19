# ATmega C++ library

## Description
Library containing miscellaneous drivers and containers, specifically for microcontroller ATmega328P.  
The code is written in C++17 and adapted for Microchip Studio. 

## Content
The library includes the following components:

### Hardware drivers
* [ADC](./include/driver/adc/interface.h): Driver for ADC (A/D converter) utilization.
* [EEPROM](./include/driver/eeprom/interface.h): Driver for utilization of EEPROM.  
* [GPIO](./include/driver/gpio/interface.h): GPIO driver.
* [Serial](./include/driver/serial/interface.h): Serial device driver.
* [TempSensor](./include/driver/tempsensor/interface.h): Temperature sensor driver. 
* [Timer](./include/driver/timer/interface.h): Hardware timer driver.
* [Watchdog](./include/driver/watchdog/interface.h): Watchdog timer driver.

### Smart pointers
* [SharedPtr](./include/memory/shared_ptr.h): Implementation of shared pointers of any data type.
* [UniquePtr](./include/memory/unique_ptr.h): Implementation of unique pointers of any data type.

### Machine learning algorithms
* [LinReg](./include/ml/lin_reg/interface.h): Regression model for predicting linear patterns.

### Containers
* [Array](./include/container/array.h): Implementation of static arrays of any data type.  
* [CallbackArray](./include/utils/callback_array.h): Implementation of callback arrays of arbitrary size.  
* [List](./include/container/list.h): Implementation of doubly linked lists of any data type.  
* [Pair](./include/utils/pair.h): Implementation of pairs containing values of any data type.  
* [Vector](./include/container/vector.h): Implementation of dynamic vectors of any data type.  

### Logic
* [Logic](./include/logic/interface.h): MCU control system integrating buttons, LED control, 
temperature sensing, timer management etc.

### Other
The library also includes miscellaneous [utility functions](./include/utils/utils.h), 
[type traits](./include/utils/type_traits.h) etc. 

Unit and component test are implemented in the [test](./test/README.md) subdirectory.

## Usage 
This library must be opened in a Windows environment to build.  
Copy the library into a Windows path, such as the C drive, before building.