//initialize variable for pin
int led=3;
void setup() {
  //initailize mode
  pinMode(led,OUTPUT);
}

void loop() {
  // use digitalwrite to set led status
  digitalWrite(led,HIGH);
  delay(100); //delay is used to set time duration between on and off
  digitalWrite(led,LOW);
  delay(100);
}
