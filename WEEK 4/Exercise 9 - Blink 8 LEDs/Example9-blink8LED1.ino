int LED[] = {3,4,5,6,7,8,9,10};

void setup() {
  
  Serial.begin(9600);

  for(int i =0; i<=7; i++)
  {
  pinMode(LED[i],OUTPUT); // Sets all the LED pins as OUTPUT
  }

}

void loop() {

  blinkLED(LED[0],781, 515);
  blinkLED(LED[1],2014, 1348);
  blinkLED(LED[2],343, 573);
  blinkLED(LED[3],678, 1839);
  blinkLED(LED[4],342, 534);
  blinkLED(LED[5],1478, 326);
  blinkLED(LED[6],1859, 351);
  blinkLED(LED[7],777, 888);
  
}

void blinkLED(int pin, int OnTime, int OffTime)
{
  digitalWrite(pin, HIGH);
  delay(OnTime);
  digitalWrite(pin, LOW);
  delay(OffTime);
  
}
