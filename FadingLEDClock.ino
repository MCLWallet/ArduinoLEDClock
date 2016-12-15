int led12 = 5;
int led3 = 11;
int led6 = 6;
int led9 = 10;

float ascTimer = 0.0;
float descTimer = 15.0;

float count = 0;
float now = 0;

float lastNumber = 0;
float difference = 0;
float differenceSum = 0;

int n = 0;

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
  //Serial.print("Loop ");
  //Serial.println(n);
  
  lastNumber = now;
  
  now = millis();

  difference = (float)(now - lastNumber)/1000.0;
  differenceSum = differenceSum + difference;

  

  
  float timer = now - count;
  //Serial.println("Now: ");
  //Serial.println(now);
  //Serial.println("Timer: ");
  Serial.println(timer);
  //Serial.print("Difference: ");
  //Serial.println(difference);
  
  if (timer >= 0 && timer < 15000) {
    analogWrite(led12, 90-differenceSum*6);
    analogWrite(led9, 0);
    analogWrite(led6, 0);
    analogWrite(led3, 0+differenceSum*6);
  }
  if (timer >= 15000 && timer < 30000) {
    analogWrite(led12, 0);
    analogWrite(led9, 0);
    analogWrite(led6, 0+differenceSum*6);
    analogWrite(led3, 90-differenceSum*6);
  }
  if (timer >= 30000 && timer < 45000) {
    analogWrite(led12, 0);
    analogWrite(led9, 0+differenceSum*6);
    analogWrite(led6, 90-differenceSum*6);
    analogWrite(led3, 0);
  }
  if (timer >= 45000 && timer < 60000) {
    analogWrite(led12, 0+differenceSum*6);
    analogWrite(led9, 90-differenceSum*6);
    analogWrite(led6, 0);
    analogWrite(led3, 0);
  }
  if ( timer >= 60000) {
    count = now;  
  }
  n++;
}
