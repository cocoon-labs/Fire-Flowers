void flamer() //keeps solenoid open on fire flower 1 for as long as the button is pressed
{
  digitalWrite(ri,HIGH);
  digitalWrite(rii,HIGH);
}

void fireflowers() //default program that runs unless switched to tempo mode
{
reset();
altburst();
reset();
altbursttwo();

}
