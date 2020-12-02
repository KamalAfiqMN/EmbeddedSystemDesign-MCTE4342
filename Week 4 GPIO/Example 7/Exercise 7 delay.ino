void setup() 
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
 

}

void loop() 
{  
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 delay(400);
 digitalWrite(6, HIGH);
 digitalWrite(7, LOW);
 delay(350);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 delay(250);
 digitalWrite(6, LOW);
 delay(100);
}
