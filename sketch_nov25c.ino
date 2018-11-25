int m1a =11;
int m1b=10;
int m2a=9;
int m2b=6;
int fl=2;
int fr=4;
int bl=7;
int br=13;


void setup() {
  // put your setup code here, to run once:
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);
}
void forward()
{
  digitalWrite(m1a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2a,LOW);
  digitalWrite(m2b,HIGH);
  }
void backward()
{
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,HIGH);
  digitalWrite(m2a,HIGH);
  digitalWrite(m2b,LOW);
  }
void right()
{
  digitalWrite(m1a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2a,HIGH);
  digitalWrite(m2b,LOW);
  }
void left()
{
  digitalWrite(m1a,LOW);
  digitalWrite(m1b,HIGH);
  digitalWrite(m2a,LOW);
  digitalWrite(m2b,HIGH);
  }


void loop() {
  int lf = !digitalRead(fl);
  int rf = !digitalRead(fr);
  int lb = !digitalRead(bl);
  int rb =!digitalRead(br);
  // put your main code here, to run repeatedly:
  if ((lf == LOW && rf == HIGH && lb == HIGH && rb == HIGH) || (lf == HIGH && rf == HIGH && lb == HIGH && rb == LOW)){
    backward();
    delay(1000);
    left();
    delay(3000);
  }
  else if((lf == HIGH && rf == LOW && lb == HIGH && rb == HIGH) || (lf == HIGH && rf == HIGH && lb == LOW && rb == HIGH)){
    backward();
    delay(1000);
    right();
    delay(3000);
  }
  else if((lf == LOW && rf == LOW && lb == HIGH && rb == HIGH) || (lf == HIGH && rf == HIGH && lb == LOW && rb == LOW)){
    backward();
    delay(1000);
    left();
    delay(4000);
  }
}    
