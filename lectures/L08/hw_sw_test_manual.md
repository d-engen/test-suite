# Hardware and software manual testing protocol.

## 1. Basic functionality
* **Power-on test** : Build and flash the code to an Arduino Uno. Open up the serial monitor and verify that the system boots correctly and prints the following messages.
* "Temperature prediction training  succeded!"
* "Running the system!"
* "Please enter one of the following commands:
    * 't' to toggle the toggle timer
    * 'r' to read the temperature
    * 's' to check the state of the toggle timer"

## 2. Toggle functionality
* Press the toggle-button **(SW3)**.
* Verify that the LED **starts** flashing.
* Press the toggle-button **(SW3)** again.
* Verify that the led **stops** flashing.
* Measure the frequency of the flashing.
* Press the toggle-button **(SW3)** repeatedly to verify that the button-debounce is working correctly.
    * Repeated button-presses within 300 ms should be ignored by system.

## 3. Temperature reading
* Press temp-button **(SW2)**.
* Verify that the temperature is printed in the serial monitor.
* Compare the printed temperature with room-temp, is the value reasonable?
* Put your hand om the temperature sensor **(TMP1)** and verify that temperature rises.
* Verify that automated temperature printouts happens in serial monitor according to timer.
* Press the temp-button **(SW2)** repeatedly to verify that the button-debounce is working correctly.
    * Repeated button-presses within 300 ms should be ignored by system.

## 4. Watchdog timer
* Verify that the watchdog-timer is activated at boot-up.
* To test watchdog-functionality introduce a bug in logic.cpp by commenting out line 109 `myWatchdog.reset();`.
* Verify that the systems restarts automatically after watchdog-timeout **(1024 ms)**.
* Check that system starts correctly after watchdog reset.
* Remove bug on line 109 and verify that system works correctly again.

## 5. EEPROM-persistance
* Press toggle-button **(SW3)** until the LED starts flashing.
* Restart the system by pressing **RESET**-button on the Arduino Uno.
* Power on the system again and verify that the toggle-state is the same as it was before i.e. the LED should **start** flashing.
* Press toggle-button **(SW3)** until the LED stops flashing.
* Restart system and verify that the toggle-state is the sama as it was before i.e. the LED should be **OFF**.


