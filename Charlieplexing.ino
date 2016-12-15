int ledPin1 = 12;
int ledPin2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, INPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  int bla = sin(90);
}
