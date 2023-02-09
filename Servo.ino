#include <Servo.h> 
Servo serv;
int pos = 0 ;

void setup() {
  serv.attach(3) ;
  Serial.begin(9600) ;
}
void loop() {  
  for(int i = 0 ; i <= 180; i++) 
  { 
  serve.write(i) ;
  delay(500) ;
  }

  for(i =180 ; i>=0 ;i--)
  {
  serve.write(i) ;
  delay(500) ;
  }
}
