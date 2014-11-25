void flamer() //keeps solenoid open on fire flower 1 for as long as the button is pressed
{
  Serial.println(fastfireflag);
  digitalWrite(ri,HIGH);
  digitalWrite(rii,HIGH);
  delay(2000);
  digitalWrite(ri,LOW);
  digitalWrite(rii,LOW);
  delay(200);
  fastfireflag = LOW;
}

void fireflowers() //default program that runs unless switched to tempo mode
{
Serial.println(fastfireflag);
reset();
altburst();
reset();
altbursttwo();

}
