    /**int Yellowled =  0;      
    int YellowledState = LOW;             // ledState used to set the LED
    unsigned long previousMillis1 = 0;        // will store last time LED was updated
    long OnTime1 = 750;           // milliseconds of on-time
    long OffTime1 = 350;          // milliseconds of off-time
 
    int Redled =  1;      
    int RedledState = LOW;             // ledState used to set the LED
    unsigned long previousMillis2 = 0;        // will store last time LED was updated
    long OnTime2 = 400;           // milliseconds of on-time
    long OffTime2 = 600;
void setup() {
    pinMode(Yellowled, OUTPUT);      
    pinMode(Redled, OUTPUT);

}

void loop() {

   unsigned long currentMillis = millis();
 
  if((YellowledState == HIGH) && (currentMillis - previousMillis1 >= OnTime1))
  {
    YellowledState = LOW;  // Turn it off
    previousMillis1 = currentMillis;  // Remember the time
    digitalWrite(Yellowled, YellowledState);  // Update the actual LED
  }
  else if ((YellowledState == LOW) && (currentMillis - previousMillis1 >= OffTime1))
  {
    YellowledState = HIGH;  // turn it on
    previousMillis1 = currentMillis;   // Remember the time
    digitalWrite(Yellowled, YellowledState);   // Update the actual LED
  }
  
  if((RedledState == HIGH) && (currentMillis - previousMillis2 >= OnTime2))
  {
    RedledState = LOW;  // Turn it off
    previousMillis2 = currentMillis;  // Remember the time
    digitalWrite(Redled, RedledState);  // Update the actual LED
  }
  else if ((RedledState == LOW) && (currentMillis - previousMillis2 >= OffTime2))
  {
    RedledState = HIGH;  // turn it on
    previousMillis2 = currentMillis;   // Remember the time
    digitalWrite(Redled, RedledState);   // Update the actual LED
  }
}*/
const int LedPin1=3;
const int LedPin2=4;

void setup()
{
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  
}

void loop()
{

  digitalWrite(LedPin1, HIGH);
  delay(750); // Wait for 750 millisecond(s)
  digitalWrite(LedPin1, LOW);
  delay(350); // Wait for 350 millisecond(s)
  
  digitalWrite(LedPin2, HIGH);
  delay(400); // Wait for 400 millisecond(s)
  digitalWrite(LedPin2, LOW);
  delay(600); // Wait for 600 millisecons(s)
}
