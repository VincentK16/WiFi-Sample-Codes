String comdata = "";

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 25,26);
  Serial.print("Start!");
  delay(100);
}

void loop() {
  if (Serial2.available() > 0)
  {
    comdata = Serial2.readStringUntil('\n');
    Serial.println(comdata);
    delay(500);
  }
}
