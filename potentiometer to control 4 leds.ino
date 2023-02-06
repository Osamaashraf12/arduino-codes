#define green 3
#define yellow 5
#define blue 9
#define red 11
#define pot A1

//function to open one led
#define open(open, close1, close2, close3) digitalWrite(open, HIGH);\
digitalWrite(close1, LOW);\
digitalWrite(close2, LOW);\
digitalWrite(close3, LOW);

void setup()
{
  //setup pin types
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading = analogRead(A1);
  if (reading <= 255) {
    open(red, green, blue, yellow);
  } else if (reading <= 511) {
    open(green, red, blue, yellow);
  } else if (reading <= 767) {
    open(blue, green, red, yellow);
  } else {
    open(yellow, green, blue, red);
  }
  

}