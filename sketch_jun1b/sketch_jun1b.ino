int enA=9;
int in1=8;
int in2=6;

int enB=3;
int in3=5;
int in4=4;

int rt=80;

void setup()
{
      pinMode(in1,OUTPUT);
      pinMode(in2,OUTPUT);
      pinMode(in3,OUTPUT);
      pinMode(in4,OUTPUT);
      pinMode(enA,OUTPUT);
      pinMode(enB,OUTPUT);
      pinMode(A0,INPUT);
      pinMode(A1,INPUT);
      pinMode(A2,INPUT);
      pinMode(A3,INPUT);
      pinMode(A4,INPUT);
     // pinMode(A5,INPUT);
      Serial.begin(9600);
}

void loop(){

    int l = digitalRead(A0);
    int ml = digitalRead(A1);
    int m = digitalRead(A2);
    int mr = digitalRead(A3);
    int r = digitalRead(A4);

Serial.print(" left sensor =  ");
Serial.println(l);
Serial.print(" left middle sensor =  ");
Serial.println(ml);
Serial.print(" middle sensor = ");
Serial.println(m);
Serial.print(" right middle sensor =  ");
Serial.println(mr);
Serial.print(" right sensor =   ");
Serial.println(r);
Serial.print("\n");


 if ( (l==0 && ml==0 && m==1 && mr==0 && r==0) ||( l==0 && ml==1 && m==0 && mr==1 && r==0) || (l==0 && ml==1 && m==1 && mr==1 && r==0 ))
 {
   forward();
 }
 if (( l==0 && ml==1 && m==1 && mr==0 && r==0 ) || (l==0 && ml==1 && m==0 && mr==0 && r==0)  )
 {
   left();
 }
 if (( l==0 && ml==0 && m==1 && mr==1 && r==0 ) || (l==0 && ml==0 && m==0 && mr==1 && r==0 ) )
 {
   right();
 }
 if ( ( l==0 && ml==0 && m==0 && mr==0 && r==0 ) || ( l==1 && ml==1 && m==1 && mr==1 && r==1 ) )
 {
   Stop();
 }
 if (( l==0 && ml==0 && m==0 && mr==0 && r==1 ) || (l==0 && ml==0 && m==0 && mr==1 && r==1) || (l==0 && ml==0 && m==1 && mr==0 && r==1) || (l==0 && ml==0 && m==1 && mr==1 && r==1) || (l==0 && ml==1 && m==0 && mr==1 && r==1) || (l==0 && ml==1 && m==1 && mr==0 && r==1) || (l==0 && ml==1 && m==1 && mr==1 && r==1))
 {
  right90();
 }
 if (( l==1 && ml==0 && m==0 && mr==0 && r==0 )|| (l==1 && ml==1 && m==0 && mr==0 && r==0) || (l==1 && ml==0 && m==1 && mr==0 && r==0) || (l==1 && ml==1 && m==1 && mr==0 && r==0) || (l==1 && ml==1 && m==0 && mr==1 && r==0) || (l==1 && ml==0 && m==1 && mr==1 && r==0) || (l==1 && ml==1 && m==1 && mr==1 && r==0))
 {
  left90();
 }
  
}

 void forward()
{
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW);  
  analogWrite(enA, 40); 
  analogWrite(enB, 40); 

}
  

void right()
{

  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW);  
  analogWrite(enA, 30); 
  analogWrite(enB, 50); 

}

void right90() 
{ 
  digitalWrite(in1, LOW); 
  digitalWrite(in2, HIGH); 
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW); 
  analogWrite(enA, rt); 
  analogWrite(enB, rt); 
} 

  
void left()
{
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH); 
  digitalWrite(in4, LOW);  
  analogWrite(enA, 50); 
  analogWrite(enB, 30); 
}

void left90() { 
  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW); 
  digitalWrite(in3, LOW); 
  digitalWrite(in4, HIGH); 
  analogWrite(enA, rt); 
  analogWrite(enB, rt); 
} 

  
void Stop()
{
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
}