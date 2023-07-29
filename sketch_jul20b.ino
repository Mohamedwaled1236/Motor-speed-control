int IN1=9;
int IN2=8;
int IN3=7;
int IN4=6;
int ENA=10;
int ENB=5;
int sens=3;
int senso=4;
int reading;




void setup(){
  
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(sens,INPUT);
  pinMode(senso ,INPUT);
    analogWrite(ENA,128);  
   analogWrite(ENB,128); 

   Serial.begin(9600);
  }

void loop() {

  if(Serial.available()>0){
   reading=Serial.read();
   switch(reading){
case 'F':
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
break;

case'L':

digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
break;
case'R':
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
break;

case'B':
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
break;

case'S':
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
break;


}
  }
}
