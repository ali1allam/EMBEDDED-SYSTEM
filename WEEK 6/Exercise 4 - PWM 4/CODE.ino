void setup() {
  // put your setup code here, to run once:

  unsigned char*ddrb= (unsigned char*)0x24;
  unsigned char*ocr1al = (unsigned char*)0x88;
  unsigned char*tccr1a = (unsigned char*)0x80;
  unsigned char*tccr1b = (unsigned char*)0x81;
  *ddrb=2;
  *ocr1al =255; //25% duty cycle
  *tccr1a =0b10000011; //Normal output channel A
  *tccr1b =0b00000010; //8 pre-scalar
}

void loop() {
  // put your main code here, to run repeatedly:

}
