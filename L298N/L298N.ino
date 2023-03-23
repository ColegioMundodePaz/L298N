  // motor A
  int ENA = 10; //PWM pin
  int IN3 = 8;
  int IN4 = 9;
  
  // motor B
  int ENB = 5; //PWM pin
  int IN1 = 6;
  int IN2 = 7;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  avanzar();
  delay(3000);
  parar();
  delay(1000);
  retroceder();
  delay(3000);
  parar();
  delay(1000);
}

void avanzar(){
  analogWrite(ENA, 100); // velocidad motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  analogWrite(ENB, 100); // velocidad motor B
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void retroceder(){
  analogWrite(ENA, 100); // velocidad motor A
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  analogWrite(ENB, 100); // velocidad motor B
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void parar(){
  analogWrite(ENA, 100); // velocidad motor A
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  
  analogWrite(ENB, 100); // velocidad motor B
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}