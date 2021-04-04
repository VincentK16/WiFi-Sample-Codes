#include <uKitExplore.h>
byte comdata;
void setup() {
  Initialization();
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
//  protocol();
  comdata = readUltrasonicDistance(1);
  Serial.println(comdata);
  delay(500);
  // put your main code here, to run repeatedly:
}
