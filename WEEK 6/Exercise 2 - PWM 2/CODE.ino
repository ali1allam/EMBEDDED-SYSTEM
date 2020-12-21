void setup() {
  // put your setup code here, to run once:

  unsigned char*ddrd=(unsigned char*)0x2A;
  unsigned char*ocr0b =(unsigned char*)0x48;
  unsigned char*tccr0a = (unsigned char*)0x44;
  unsigned char*tccr0b = (unsigned char*)0x45;
  *ddrd=1 <<5;
  *ocr0b =127; //50% duty cycle
  *tccr0a =0b00100011; //Normal output channel B, Fast PWM 255 top
  *tccr0b =0b00000001; //1 pre-scaler

}

void loop() {
  // put your main code here, to run repeatedly:

}
