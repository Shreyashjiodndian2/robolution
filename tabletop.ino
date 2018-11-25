int m1a =11;
int m1b=10;
int m2a=9;
int m2b=6;
int f1=2;
int f2=4;
int b1=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);
  pinMode(f1,INPUT);
  pinMode(f2,INPUT);
  pinMode(b1,INPUT);
  Serial.begin(9600);

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
  // put your main code here, to run repeatedly:
int  fa=digitalRead(f1);
int  fb=digitalRead(f2);
int  ba=digitalRead(b1);
  if(fa==LOW && fb==LOW && ba==LOW)
  {
    forward();
    }
    else if(fa==LOW && fb==LOW && ba==HIGH)
    {
      forward();
      delay(2000);
      left();
      delay(3000);
      }
    else if(fa==LOW && fb==HIGH && ba==LOW)
    {
      backward();
      delay(1000);
      left();
      delay(1000);
      }
     else if(fa==LOW && fb==HIGH && ba==HIGH)
     {
      ;
      }
      else if(fa==HIGH && fb==LOW && ba==LOW){
        backward();
        delay(2000);
        left();
        delay(4000);
        }
      else if(fa==HIGH && fb==LOW && ba==HIGH)
      {
        
        }
      else if(fa==HIGH && fb==HIGH && ba==LOW)
      {
        backward();
        delay(2000);
        right();
        delay(3000);
        }
      else if (fa==HIGH && fb==HIGH && ba==HIGH)
      {
        
        }
}
