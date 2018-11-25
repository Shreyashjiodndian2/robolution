// Starting of Program
int m1a = 0;
int m1b = 1;
int m2a = 2;
int m2b = 3;
int l=7;
int f1=8;
int f2=10;
int b1=11;
int b2=15;

void setup() 
{  
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 13 set as output Pin
pinMode(f1 ,INPUT);
pinMode(f2 ,INPUT);
pinMode(b1,INPUT);
pinMode(b2,INPUT);
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

       void stop1()
      {  
        digitalWrite(m1a, LOW);
        digitalWrite(m1b, LOW);
        digitalWrite(m2a, LOW);
        digitalWrite(m2b, LOW);
      } 
        

void loop()
{
  int fa=digitalRead(f1); //left sensor
  int fb=digitalRead(f2);//right sensor
  int ba=digitalRead(b1);
  int bb=digitalRead(b2);
  
while (Serial.available() > 0)
    if( fa==LOW && fb==LOW && ba==LOW && bb==LOW) // forward
  {
    forward();
    }
    else if( fa==LOW && fb==LOW && ba==LOW && bb==HIGH){
      forward();
      delay(2000);
      left();
      delay(3000);
    
    }
   else if( fa==LOW && fb==LOW && ba==HIGH && bb==LOW){
      forward();
      delay(2000);
      right();
      delay(3000);
    }
   else if( fa==LOW && fb==LOW && ba==HIGH && bb==HIGH)
   {
     forward();
      delay(2000);
    right();
    delay(3000);
    }
   else if( fa==LOW && fb==HIGH && ba==LOW && bb==LOW)
   {
    backward();
    delay(2000);
    left();
    delay(3000);
    }
   else if( fa==LOW && fb==HIGH && ba==LOW && bb==HIGH)
   {
    left();
    delay(3500);
    }
   else if( fa==LOW && fb==HIGH && ba==HIGH && bb==LOW)
   {
    
    }
   else if( fa==LOW && fb==HIGH && ba==HIGH && bb==HIGH)
   {
    
    }
   else if( fa==HIGH && fb==LOW && ba==LOW && bb==LOW)
   {
    backward();
    delay(2000);
    right();
    delay(3500);
    }
   else if( fa==HIGH && fb==LOW && ba==LOW && bb==HIGH)
   {
    
    }
   else if( fa==HIGH && fb==LOW && ba==HIGH && bb==LOW)
   {
    right();
    delay(3500);
    }
   else if( fa==HIGH && fb==LOW && ba==HIGH && bb==HIGH)
   {
    
    }
   else if( fa==HIGH && fb==HIGH && ba==LOW && bb==LOW)
   {
    backward();
    delay(2000);
    right();
    delay(3500);
    }

     else if( fa==HIGH && fb==HIGH && ba==LOW && bb==HIGH)
   {
    
    }
   else if( fa==HIGH && fb==HIGH && ba==HIGH && bb==LOW)
   {
    
    }
   else if( fa==HIGH && fb==HIGH && ba==HIGH && bb==HIGH)
   {
    
    }
  
                                                      
}   
