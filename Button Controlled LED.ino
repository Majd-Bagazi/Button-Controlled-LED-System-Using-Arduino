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
