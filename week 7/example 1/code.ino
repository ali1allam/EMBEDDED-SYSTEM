volatile boolean ledOn= false;

void setup() {
  pinMode(12, OUTPUT);
  pinMode(4, INPUT);
  attachInterrupt(0,buttonPressed,RISING);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void buttonPressed()
{
  if(ledOn)
  {
    ledOn = false;
    digitalWrite(12,LOW);
  }
  else
  {
    ledOn = true;
    digitalWrite(12,HIGH);
  }
}
