char*admux= (char*)0x7C;
char*adcsra= (char*)0x7A;
volatile unsigned char *adch= (unsigned char*)0x79;
volatile unsigned char *adcl= (unsigned char*)0x78;
int main()                                          //To run on Arduino
{
*admux=0b01000011;                                  //Set analog reference to AVCC and analog source to PC3.
*adcsra=0b11100111;                                 //Enable ADC and auto-triggering
// and set pre-scalerto 128
Serial.begin(9600);
while(1)
{
int lowbyte= (*adcl);                               // low byte
int highbyte= (*adch);                              // high byte
int value = (highbyte<<8) | lowbyte;                //Merge high byte and low byte
Serial.println(value);
}
}
