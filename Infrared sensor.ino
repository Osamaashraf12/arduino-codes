char O;
#define yellow 3
#define green 4
#define out 5

void setup() {
    Serial.begin(9600);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(out, INPUT);
}
                
void loop() {
  // read the IR input into variable called sensor
  int sensor = digitalRead(out);
  if(sensor){
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  }
  else {
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  
  }
  
}
