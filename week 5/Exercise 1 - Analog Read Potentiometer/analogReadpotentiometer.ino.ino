int sensorPin = A0;     //input pin for potentiometer  
int sensorValue = 0;    //store value from analog read 
void setup() {
Serial.begin(9600);
}
void loop() {
int sensorValue = analogRead(A0);
Serial.println(sensorValue);
delay (1000);
}
