#include <SimpleTimer.h>
void reset()
{
eventtimer = timer.setTimer(10,bothoff());
}

void altburst()
{
  digitalWrite(ri,HIGH);
  digitalWrite(rii,LOW);
  delay(500);
  digitalWrite(ri,LOW);
  digitalWrite(rii,HIGH);
  delay(500);
  digitalWrite(ri,HIGH);
  digitalWrite(rii,LOW);
  delay(500);
  digitalWrite(ri,LOW);
  digitalWrite(rii,HIGH);
  delay(500);
  digitalWrite(ri,LOW);
  digitalWrite(rii,LOW);
  delay(1000);
}

void altbursttwo()
{
  digitalWrite(ri,HIGH);
   delay(400);
  digitalWrite(ri,LOW);
  delay(1000);
  digitalWrite(rii,HIGH);
  delay(400);
  digitalWrite(rii,LOW);
  delay(1000);
}

void incburst()
{
  
}

void decburst()
{
  
}

void bigburst()
{
  
}

void altincburst()
{
  
}

void altdecburst()
{
  
}

void fastfire()
{
  
}

// relay functions

void bothon()
{
  digitalWrite(ri,HIGH);
  digitalWrite(rii,HIGH);
}

void bothoff()
{
  digitalWrite(ri,LOW);
  digitalWrite(rii,LOW);
}

void rion()
{
  digitalWrite(ri,HIGH);
}

void rioff()
{
  digitalWrite(ri,LOW);
}

void riion()
{
  digitalWrite(rii,HIGH);
}
void riioff()
{
  digitalWrite(rii,LOW);
}
