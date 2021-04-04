void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 25,26);
  Serial.print("Start!");
  delay(100);
}

void loop() {
  Serial2.write("H");
  delay(5000);
  Serial2.write("N");
  delay(5000);
}
