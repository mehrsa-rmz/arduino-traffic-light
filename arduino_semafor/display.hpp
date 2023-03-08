class Display
{
  int led1; 
  int led2;
  int led3;
  int led4;
  int led5;
  int led6;
  int led7;

public:
  Display(int l1, int l2, int l3, int l4, int l5, int l6, int l7)
  {
    led1=l1;
    led2=l2;
    led3=l3;
    led4=l4;
    led5=l5;
    led6=l6;
    led7=l7;
  }
  
  void show9()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,1);
    digitalWrite(led6,0);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show8()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    digitalWrite(led6,0);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show7()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,1);
    digitalWrite(led5,1);
    digitalWrite(led6,1);
    digitalWrite(led7,1);
    delay(1000);
  }
  
  void show6()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,1);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    digitalWrite(led6,0);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show5()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,1);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,1);
    digitalWrite(led6,0);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show4()
  {
    digitalWrite(led1,1);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,1);
    digitalWrite(led5,1);
    digitalWrite(led6,0);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show3()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,1);
    digitalWrite(led6,1);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show2()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,1);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    digitalWrite(led6,1);
    digitalWrite(led7,0);
    delay(1000);
  }
  
  void show1()
  {
    digitalWrite(led1,1);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,1);
    digitalWrite(led5,1);
    digitalWrite(led6,1);
    digitalWrite(led7,1);
    delay(1000);
  }
  
  void show0()
  {
    digitalWrite(led1,0);
    digitalWrite(led2,0);
    digitalWrite(led3,0);
    digitalWrite(led4,0);
    digitalWrite(led5,0);
    digitalWrite(led6,0);
    digitalWrite(led7,1);
    delay(1000);
  }

};
