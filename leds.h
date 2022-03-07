
void setup(){ 
pinMode(13,OUTPUT);
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);


digitalWrite(13,LOW);

        }
void loop() {
digitalWrite(0,LOW);
delay(100);
digitalWrite(1,LOW);
delay(100);
digitalWrite(2,LOW);
delay(10);
digitalWrite(0,LOW);
delay(10);
digitalWrite(1,LOW);
delay(10);
digitalWrite(2,LOW);
delay(10);

digitalWrite(0,HIGH);
delay(100);
digitalWrite(1,HIGH);
delay(100);
digitalWrite(2,HIGH);
delay(10);
digitalWrite(0,HIGH);
delay(10);
digitalWrite(1,HIGH);
delay(10);
digitalWrite(2,HIGH);
delay(10);



}
