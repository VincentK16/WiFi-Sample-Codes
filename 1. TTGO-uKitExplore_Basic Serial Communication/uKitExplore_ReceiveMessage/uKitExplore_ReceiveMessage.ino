int comdata = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0)
  {
    comdata = Serial.read(); //this will read the data as int by default
    Serial.println(comdata);
    if(comdata ==72){ //if (comdata='H')
        Serial.println("Hello Send");
      }
    if(comdata ==78){ //if (comdata='N')
        Serial.println("No Send");
     }
   }
}
