//name pins for easy understanding
#define green 2
#define yellow 7
#define red 12

//make a function for lighting every led
//do while(0) is used to make the function loop for one time
#define lighting(color, msec) do{ digitalWrite(color, HIGH); delay(msec); digitalWrite(color, LOW); }while(0);

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
  //light the green for 2s then close
  lighting(green, 2000);

  //light the yellow for 0.5s then close
  lighting(yellow, 500);

  //light the red for 1s then close
  lighting(red, 1000);

}