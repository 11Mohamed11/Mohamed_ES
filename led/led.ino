int in1=2;
int in2=3;
int in3=4;
int in4=5;
int enb=10;
int ena=11;
int ls=A2;
int rs=A0;
void setup(){
  Serial.begin(9600);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
 pinMode(ena, OUTPUT);
 pinMode(enb, OUTPUT);
 pinMode(A2, INPUT);
 pinMode(A0, INPUT);

}
void loop (){
int ls=digitalRead (A2);
int rs= digitalRead (A0);
Serial.print("left sensor \t");
 Serial.print(ls);
  Serial.print("\t right sensor \t");
  Serial.print(rs);
  Serial.print("\n");
if (rs == 1 && ls==1){
  digitalWrite (in1,HIGH);
  digitalWrite (in2,LOW );
  digitalWrite (in3,LOW );
  digitalWrite (in4,HIGH );
digitalWrite (ena, 255);
digitalWrite (enb, 255);
}
else if (rs == 0 && ls==1){
  digitalWrite (in1,HIGH);
  digitalWrite (in2,LOW );
  digitalWrite (in3,LOW );
  digitalWrite (in4,HIGH );
analogWrite (ena, 255);
analogWrite (enb, 90);
}
else if (rs == 1 && ls==0){
  digitalWrite (in1,HIGH);
  digitalWrite (in2,LOW );
  digitalWrite (in3,LOW );
  digitalWrite (in4,HIGH );
analogWrite (ena, 90);
analogWrite (enb, 255);
}
else if (rs == 0 && ls==0){
  digitalWrite (in1,HIGH);
  digitalWrite (in2,LOW );
  digitalWrite (in3,LOW );
  digitalWrite (in4,HIGH );
analogWrite (ena, 0);
analogWrite (enb, 0);
}
}