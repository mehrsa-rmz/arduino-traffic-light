class Leds
{
  int green; 
  int yellow;
  int red;

public:
  Leds(int g, int y, int r)
  {
    green=g;
    yellow=y;
    red=r;
  }
    
  void showGreen()
  {
     digitalWrite(green,1);
     digitalWrite(yellow,0);
     digitalWrite(red,0);
  }
  
  void showYellow()
  {
    digitalWrite(green,0);
    digitalWrite(yellow,1);
    digitalWrite(red,0);
  }
  
  void showRed()
  {
    digitalWrite(green,0);
    digitalWrite(yellow,0);
    digitalWrite(red,1);
    delay(1000);
  }

};
