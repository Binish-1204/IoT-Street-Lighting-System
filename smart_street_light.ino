int IR1 = 8; // IR sensor pin
int IR2=9;
int IR3 = 10;
int LDR = A0; // LDR pin
int led1 = 3;// LED pin
int led2 = 5;
int led3 = 6;
//int val1; // Variable to store IR sensor value
//int val2; // Variable to store LDR value

void setup() {
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(LDR, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  IR1 = digitalRead(8); // Read IR sensor value
  IR2 = digitalRead(9);
  IR3 = digitalRead(10);
  LDR = analogRead(A0); // Read LDR value
  
  // Example: Turn on LED if IR sensor detects an object and LDR value is below a threshold
  if (IR1 == LOW && LDR > 500) {
    digitalWrite(led1, HIGH);
  } 
  if (IR2 == LOW && LDR > 500) {
    digitalWrite(led2, HIGH);
  } 
  if (IR3 == LOW && LDR > 500) {
    digitalWrite(led3, HIGH);
  } 
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}