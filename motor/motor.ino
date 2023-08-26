#define in1 4
#define in2 5
#define in3 7
#define in4 8
#define in10 9
void setup() {
  // put your setup code here, to run once:
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(in10, HIGH);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
delay(5000);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
delay(5000);
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(5000);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(5000);
}
