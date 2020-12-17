int A=2;
int B=3;
int C=4;
int D=5;



int A_count=0;
int B_count=0;
int C_count=0;
int D_count=0;



void setup() {

  Serial.begin(9600);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  Serial.print("A="),Serial.print("0"),
  Serial.print(" B="),Serial.print("0"),
  Serial.print(" C="),Serial.print("0"),
  Serial.print(" D="),Serial.print("0");

  
}

void loop()
{
int A_state = digitalRead(A);
int B_state = digitalRead(B);
int C_state = digitalRead(C);
int D_state = digitalRead(D);


if (A_state ==0){
    A_count ++;
  
  delay(1000);
}
else 
{}
if (B_state ==0){
    B_count ++;
  
  delay(1000);
}
else 
{}
if (C_state ==0){
    C_count ++;
  
  delay(1000);
}
else 
{}
if (D_state ==0){
    D_count ++;
  
  delay(1000);
}

else 
{}
  if (A_state ==0 || B_state ==0 || C_state ==0 || D_state ==0 )
  {
  Serial.print("\n");  
  Serial.print("A="),Serial.print(A_count),
  Serial.print(" B="),Serial.print(B_count),
  Serial.print(" C="),Serial.print(C_count),
  Serial.print(" D="),Serial.print(D_count),
  
  delay(1000);
  }
  else
  {}
}
