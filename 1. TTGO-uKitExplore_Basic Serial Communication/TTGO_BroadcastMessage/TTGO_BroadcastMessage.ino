void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, 25,26);
  Serial.print("Start!");
  delay(100);
}

void loop() {
  Serial2.write("H"); //You can use Serial2.print("H") as well
  delay(5000);
  Serial2.write("N"); //You can use Serial2.print("N") as well
  delay(5000);
}
