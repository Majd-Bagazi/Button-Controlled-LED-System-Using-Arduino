# Button-Controlled-LED-System-Using-Arduino
This project demonstrates how to control 3 LEDs using 3 push buttons with an Arduino Uno. When a button is pressed, the corresponding LED lights up. This helps beginners understand basic digital input/output operations in Arduino.
## Components Used 
1 × Arduino Uno  
- 1 × Breadboard  
- 3 × Push Buttons  
- 3 × LEDs (any color)  
- 3 ×1kΩ Resistors (for LEDs)    
- Jumper Wires
- ## Circuit Connections  

| Component      | Arduino Pin |
|----------------|-------------|
| Button 1       | D5          |
| LED 1          | D2          |
| Button 2       | D6          |
| LED 2          | D3          |
| Button 3       | D7          |
| LED 3          | D4          | 
## Arduino Code
// أزرار
const int button1 = 5;
const int button2 = 6;
const int button3 = 7;

// ليدات
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // إذا الزر مضغوط → شغل الليد
  digitalWrite(led1, digitalRead(button1));
  digitalWrite(led2, digitalRead(button2));
  digitalWrite(led3, digitalRead(button3));
}
How It Works:
Each button is connected to a digital input pin.

Each LED is connected to a digital output pin.

When a button is pressed, the Arduino detects a HIGH signal and turns on the associated LED.

When the button is released, the LED turns off.

Project Goal
Learn how to read button inputs in Arduino.

Control LEDs using simple logic.

Practice building basic circuits on a breadboard.

Future Improvements
Add debounce logic to improve button accuracy.

Use toggle behavior instead of momentary lighting.

Display button states via Serial Monitor.

Creat by : Majd Omar Bagazi
