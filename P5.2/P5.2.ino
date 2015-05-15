int pausa = 200;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  delay(pausa);
  digitalWrite(3, HIGH);
  delay(pausa);
  digitalWrite(4, HIGH);
  delay(pausa);
  digitalWrite(5, HIGH);
  delay(pausa);
  digitalWrite(6, HIGH);
  delay(pausa);
  digitalWrite(7, HIGH);
  delay(pausa);
  digitalWrite(8, HIGH);
  delay(pausa);
  digitalWrite(9, HIGH);
  delay(pausa);
  digitalWrite(10, HIGH);
  delay(pausa);
  digitalWrite(11, HIGH);
  delay(pausa);
  
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(pausa);
  
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(pausa);
  
  digitalWrite(13, LOW);
  delay(pausa);
  
  digitalWrite(13, HIGH);
  delay(pausa);
  
  digitalWrite(12, HIGH);
  delay(pausa);
  
  digitalWrite(11, HIGH);
  delay(pausa);
  
   
  digitalWrite(10, LOW);
  delay(pausa);
  digitalWrite(9, LOW);
  delay(pausa);
  digitalWrite(8, LOW);
  delay(pausa);
  digitalWrite(7, LOW);
  delay(pausa);
  digitalWrite(6, LOW);
  delay(pausa);
  digitalWrite(5, LOW);
  delay(pausa);
  digitalWrite(4, LOW);
  delay(pausa);
  digitalWrite(3, LOW);
  delay(pausa);
  digitalWrite(2, LOW);
  delay(pausa);
  digitalWrite(1, LOW);
  delay(pausa);
  
  
  
 
}
