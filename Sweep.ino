void setup(){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}
void loop(){
  spin();
  delay(500);
  zigzag();
  reverse();
  delay(3000);
  }
void forward(){
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
 
  }
void reverse(){
   digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
  }
  void left(){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
  }
void right(){
  digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
     digitalWrite(5,LOW);
      digitalWrite(6, LOW);
}

void spin(){
  left();
  delay(1000);
  forward();
  delay(2000);
  right();
  delay(1000);
  forward();
  delay(2000);
  }

void zigzag(){
  left();
  delay(100);
  forward();
  delay(800);
  right();
  delay(100);
  forward();
  delay(800);
  
  }

