#include <ezButton.h>

int total_A, total_B;
ezButton A(7);
ezButton B(8);


void setup()
{
  Serial.begin(9600);
  A.setDebounceTime(100); 
  B.setDebounceTime(100); 
}

void loop()
{
  A.loop();
  B.loop();
 
  
  if (A.isPressed())
  {
    total_A++;
    print();
  }
  
  else if (B.isPressed())
  {
    total_B++;
    print();
  }
  
  else
  {
    
  }
  
}

void print()
{
  Serial.print("A = ");
  Serial.print(total_A);
  Serial.print(" B = ");
  Serial.print(total_B);
  Serial.print('\n');
}
