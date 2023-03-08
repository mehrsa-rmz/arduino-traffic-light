#include "display.hpp"
#include "leds.hpp"

int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;
int green=11;
int yellow=12;
int red=13;

void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() 
{
  Display d(led1, led2, led3, led4, led5, led6, led7);
  Leds l(green, yellow, red);
  
  l.showGreen();
  d.show9();
  d.show8();
  d.show7();
  d.show6();
  d.show5();
  d.show4();
  d.show3();
  d.show2();
  d.show1();
  d.show0();
  
  l.showYellow();
  d.show3();
  d.show2();
  d.show1();
  d.show0();
  
  l.showRed();
  d.show9();
  d.show8();
  d.show7();
  d.show6();
  d.show5();
  d.show4();
  d.show3();
  d.show2();
  d.show1();
  d.show0();
  
}
