#include <SimpleTimer.h>

//set up my pins beforehand, so I don't have to change them throughout
int ri = 13;
int rii = 12;
int button = 0; //Pin 2 for interrupt
//set up my button state
volatile int fastfireflag = LOW;

void setup()
{
  //begin serial for debug
  Serial.begin(9600);
  //set relay pins to output
  pinMode(ri,OUTPUT);
  pinMode(rii,OUTPUT);
  //set button pins to input
  pinMode(button,INPUT);
  //attach interrupt
  attachInterrupt(button, flamerflag, RISING);
}

void loop()
{
  if(fastfireflag == LOW)
  {
  fireflowers();
  }
  
  else if(fastfireflag == HIGH)
  {
  flamer(); 
  }
}


//create 
void fastfireflagger()
{
  fastfire();
  fastfireflag = LOW;
} 

void flamerflag()
{
  fastfireflag = HIGH;
} 



  

