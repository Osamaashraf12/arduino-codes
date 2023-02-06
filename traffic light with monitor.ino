//name pins for easy understanding
#define green 2
#define yellow 7
#define red 12

//make a function for lighting every led
#define lighting(color, msec) digitalWrite(color, HIGH);\
delay(msec);\
digitalWrite(color, LOW);

void setup()
{
  //setup pin types
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //print green and light the green for 2s then close
  Serial.print("green\n");
  lighting(green, 2000);
  
  //print yellow and light the yellow for 0.5s then close
  Serial.print("yellow\n");
  lighting(yellow, 500);
  
  //print red and light the red for 1s then close
  Serial.print("red\n");
  lighting(red, 1000);


}