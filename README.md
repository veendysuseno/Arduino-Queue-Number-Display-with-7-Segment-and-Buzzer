# Arduino Queue Number Display with 7-Segment and Buzzer

This project implements a simple queue number display system using an Arduino, a 2-digit 7-segment display, a button, and a buzzer. When the button is pressed, the queue number increments, and the buzzer produces a sound.

## Components Used

- Arduino Uno
- 2-digit 7-segment display
- Buzzer (connected to pin 12)
- Push button (connected to pin 13)
- Resistors
- Wires
- Breadboard

## How It Works

- The 2-digit 7-segment display shows the current queue number.
- A button is connected to increment the queue number each time it's pressed.
- A buzzer is used to alert when the queue number is incremented.
- The system will show numbers from 00 to 99.

## Pin Configuration

- **Buzzer**: Pin 12
- **Button**: Pin 13 (input)
- **7-Segment Display**:
  - Segment pins: 2–8 (for each segment A-G)
  - Common anode pins: 10 and 11 (for the two digits)

## Code Explanation

- The array `seven_seg_digits` holds the binary patterns to light up each digit on the 7-segment display.
- `sevenSegWrite()` function is used to output the correct pattern to the segments based on the input digit.
- The button is checked in the `loop()` function, and when pressed, it increments the `antrian` (queue number).
- The current queue number is divided into two digits (tens and ones), which are displayed on the 7-segment display.
- The buzzer produces two short beeps each time the number is incremented.

## How to Use

1. Upload the code to your Arduino board.
2. Connect the components as per the pin configuration.
3. Press the button to increment the queue number.
4. The queue number will be displayed on the 7-segment display, and the buzzer will beep.

## License

This project is open-source and free to use.

