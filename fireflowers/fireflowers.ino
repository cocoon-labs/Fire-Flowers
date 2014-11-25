#include <SimpleTimer.h>

//set up my pins beforehand, so I don't have to change them throughout
const int ri = 13;
const int rii = 12;
const int button = 0; //Pin 2 for interrupt
//set up my button state
int fastfireflag = 0;

void setup()
{
  //set relay pins to output
  pinMode(ri,OUTPUT);
  pinMode(rii,OUTPUT);
  //set button pins to input
  pinMode(button,INPUT);
  //attach interrupt
  attachInterrupt(button, flamer, RISING);
}

void loop()
{
  
if(digitalRead(button) == HIGH)
{
 flamer();
}

if(digitalRead(button) == LOW)
{
  fireflowers();
}

}


//create 
void fastfireflagger()
{
  fastfire();
  fastfireflag = 0;
} 

void flamerflag()
{
  fastfireflag = 0;
  
} 



  

