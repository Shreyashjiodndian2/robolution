// Starting of Program
int m1a = 0;
int m1b = 1;
int m2a = 2;
int m2b = 3;
char val;
void setup() {
  // put your setup code here, to run once:
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT);  // Digital pin 13 set as output Pin
}

void loop() {
  // put your main code here, to run repeatedly:

while(Serial.available()>0)
{
  val=Serial.read();
  Serial.println(val);
  }
if(val=="F") //forward
{
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,HIGH);
  }
else if(val=="B")   //BACK
{
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,HIGH);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
  }
else if(val=="L")    //LEFT
{
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,HIGH);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,HIGH);
  }
else if(val=="R")  //RIGHT
{
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW); 
  }
else if(val=="I")  //forward RIGHT
{
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW); 
  }
else if(val=="G")  //forward LEFT
{
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,HIGH);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
  }
else if(val=="H")     //BACK LEFT
{
   digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,HIGH); 
  }
else if(val=="J")  //BACK RIGHT 
{
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
  }
else if(val=="S")   //STOP
{
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
  }
}
