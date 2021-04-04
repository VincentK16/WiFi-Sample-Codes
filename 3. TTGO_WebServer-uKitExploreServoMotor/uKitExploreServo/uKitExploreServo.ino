#include <uKitExplore2.h>
int comdata = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0)
  {
    comdata = Serial.read();
    Serial.println(comdata);
    if(comdata ==72){
        Serial.println("Hello Send");
        setServoTurn(1, 0, 100);
      }
    if(comdata ==78){
        Serial.println("No Send");
        setServoStop(1);
     }
   }
}
