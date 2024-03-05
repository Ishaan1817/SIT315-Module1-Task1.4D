int state = 0;

void setup() {
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  state = digitalRead(2);
  digitalWrite(4, state);
  Serial.println(state);
}
