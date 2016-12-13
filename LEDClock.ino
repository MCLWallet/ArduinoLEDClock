int led12 = 11;
int led9 = 10;
int led6 = 6;
int led3 = 9;
unsigned long count = 0;
bool countSet = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led12,OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long now = millis();
  
  if (now - count >= 0 && now - count < 15000) {
    analogWrite(led12, 200);
    analogWrite(led9, 0);
    analogWrite(led6, 0);
    analogWrite(led3, 0);
  }
  if (now - count >= 15000 && now - count < 30000) {
    analogWrite(led12, 0);
    analogWrite(led9, 0);
    analogWrite(led6, 0);
    analogWrite(led3, 200);
  }
  if (now - count >= 30000 && now - count < 45000) {
    analogWrite(led12, 0);
    analogWrite(led9, 0);
    analogWrite(led6, 200);
    analogWrite(led3, 0);
  }
  if (now - count >= 45000 && now - count < 60000) {
    analogWrite(led12, 0);
    analogWrite(led9, 200);
    analogWrite(led6, 0);
    analogWrite(led3, 0);
  }
  if ( now - count >= 60000) {
    count = now;  
  }
  
  
}
