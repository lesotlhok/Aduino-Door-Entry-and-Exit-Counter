# Aduino Door Entry and Exit Counter
 Senosr Counter for door Entry and exit of building  

The code starts with the LiquidCrystal library.
 The first line of code sets up a 16x2 LCD display on pins 8, 7, 6, 5 and 4.
 The next two lines initialize the leds to be on pins 13 and 12 respectively.
 Next is an IN() function that increments count by 1 every time it runs through the loop.
 It then prints out "Person In Room:" followed by how many people are in the room (count).
 Next it clears the screen and prints "Person In Room:" again before moving onto digitalWrite(led_green_pin, HIGH) which turns on LED green for 500ms and then turning off LED green for 1000ms.
 This repeats until there are no more people in the room or when count reaches 0 (the last person leaves).
 The OUT() function does exactly what its name implies: it decreases count by 1 each time it loops through its looping process; this means that if someone enters into a room while you're counting down from 10 to 0 they will only show up as 9 people instead of 10 because they enter at 9 rather than 10!
 The code is used to show the person in room.
 The code sets up the human infrared interface as an input state and sets the relay to be an output.
 The led_red_pin is set to be an output, and then it is connected to a red LED on the board.
 Finally, serial communication with a computer starts at 9600 baud.
 The code sets up two pins for inputs: doorIN_sensor and doorOUT_sensor.
 It also sets one pin for outputs: relay.
 Then it connects three LEDs (led_green, led_red, led) to their respective pins on the board using digitalWrite().
 The code sets up the Arduino to use a human infrared interface, relay and LED's as input.
 The following code sets up the Arduino to use a human infrared interface, relay and LED's as input.
 Serial.begin(9600); // Set the baud rate for serial communication at 9600 bits per second

