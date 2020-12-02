const int LED1 = 9;
const long onDuration1 = 781; // OFF time for LED
const long offDuration1 = 515; // ON time for LED

const int LED2 = 8;
const long onDuration2 = 2014; 
const long offDuration2 = 1348; 

const int LED3 = 7;
const long onDuration3 = 343; 
const long offDuration3 = 573; 

const int LED4 = 6;
const long onDuration4 = 678; 
const long offDuration4 = 1839;

const int LED5 = 5;
const long onDuration5 = 342; 
const long offDuration5 = 534;

const int LED6 = 4;
const long onDuration6 = 1478; 
const long offDuration6 = 326;

const int LED7 = 3;
const long onDuration7 = 1859; 
const long offDuration7 = 351;

const int LED8 = 2;
const long onDuration8 = 777; 
const long offDuration8 = 888;



int LEDState1 = HIGH; // initial state of LED
int LEDState2 = HIGH;
int LEDState3 = HIGH;
int LEDState4 = HIGH;
int LEDState5 = HIGH;
int LEDState6 = HIGH;
int LEDState7 = HIGH;
int LEDState8 = HIGH;

long rememberTime1=0;// this is used by the code
long rememberTime2=0;
long rememberTime3=0;
long rememberTime4=0;
long rememberTime5=0;
long rememberTime6=0;
long rememberTime7=0;
long rememberTime8=0;

void setup() {
  pinMode(LED1, OUTPUT); // define LED1 as output
  digitalWrite(LED1, LEDState1); // set initial state
  
  pinMode(LED2, OUTPUT); 
  digitalWrite(LED2, LEDState2);

  pinMode(LED3, OUTPUT); 
  digitalWrite(LED3, LEDState3);

  pinMode(LED4, OUTPUT); 
  digitalWrite(LED4, LEDState4);

  pinMode(LED5, OUTPUT); 
  digitalWrite(LED5, LEDState5);

  pinMode(LED6, OUTPUT); 
  digitalWrite(LED6, LEDState6);

  pinMode(LED7, OUTPUT); 
  digitalWrite(LED7, LEDState7);

  pinMode(LED8, OUTPUT); 
  digitalWrite(LED8, LEDState8);
}

void loop() {
  
 if( LEDState1 == HIGH )
 {
    if( (millis()- rememberTime1) >= onDuration1){   
    LEDState1 = LOW; // change the state of LED
    rememberTime1 = millis(); // remember Current millis() time
    }
 }
 else
 {   
    if( (millis()- rememberTime1) >= offDuration1){     
    LEDState1 = HIGH; // change the state of LED
    rememberTime1 = millis(); // remember Current millis() time
    }

 }
  digitalWrite(LED1, LEDState1);// turn the LED ON or OFF

 
 if( LEDState2 == HIGH )
 {
    if( (millis()- rememberTime2) >= onDuration2){   
    LEDState2 = LOW; 
    rememberTime2 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime2) >= offDuration2){     
    LEDState2 = HIGH; 
    rememberTime2 = millis(); 
    }

 }
  digitalWrite(LED2, LEDState2);
  

  if( LEDState3 == HIGH )
 {
    if( (millis()- rememberTime3) >= onDuration3){   
    LEDState3 = LOW; 
    rememberTime3 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime3) >= offDuration3){     
    LEDState3 = HIGH; 
    rememberTime3 = millis(); 
    }

 }
  digitalWrite(LED3, LEDState3);


  if( LEDState4 == HIGH )
 {
    if( (millis()- rememberTime4) >= onDuration4){   
    LEDState4 = LOW; 
    rememberTime4 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime4) >= offDuration4){     
    LEDState4 = HIGH; 
    rememberTime4 = millis(); 
    }

 }
  digitalWrite(LED4, LEDState4);


  if( LEDState5 == HIGH )
 {
    if( (millis()- rememberTime5) >= onDuration5){   
    LEDState5 = LOW; 
    rememberTime5 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime5) >= offDuration5){     
    LEDState5 = HIGH; 
    rememberTime5 = millis(); 
    }

 }
  digitalWrite(LED5, LEDState5);


   if( LEDState6 == HIGH )
 {
    if( (millis()- rememberTime6) >= onDuration6){   
    LEDState6 = LOW; 
    rememberTime6 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime6) >= offDuration6){     
    LEDState6 = HIGH; 
    rememberTime6 = millis(); 
    }

 }
  digitalWrite(LED6, LEDState6);


    if( LEDState7 == HIGH )
 {
    if( (millis()- rememberTime7) >= onDuration7){   
    LEDState7 = LOW; 
    rememberTime7 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime7) >= offDuration7){     
    LEDState7 = HIGH; 
    rememberTime7 = millis(); 
    }

 }
  digitalWrite(LED7, LEDState7);


   if( LEDState8 == HIGH )
 {
    if( (millis()- rememberTime8) >= onDuration8){   
    LEDState8 = LOW; 
    rememberTime8 = millis(); 
    }
 }
 else
 {   
    if( (millis()- rememberTime8) >= offDuration8){     
    LEDState8 = HIGH; 
    rememberTime8 = millis(); 
    }

 }
  digitalWrite(LED8, LEDState8);
} // loop ends 
