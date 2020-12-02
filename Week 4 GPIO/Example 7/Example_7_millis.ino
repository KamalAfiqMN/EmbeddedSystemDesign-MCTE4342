const int LED1 = 9;
const long onDuration1 = 750; // OFF time for LED
const long offDuration1 = 350; // ON time for LED

const int LED2 = 8;
const long onDuration2 = 400; 
const long offDuration2 = 600; 

int LEDState1 = HIGH; // initial state of LED
int LEDState2 = HIGH;

long rememberTime1=0;// this is used by the code
long rememberTime2=0;

void setup() {
  pinMode(LED1, OUTPUT); // define LED1 as output
  digitalWrite(LED1, LEDState1); // set initial state
  
  pinMode(LED2, OUTPUT); 
  digitalWrite(LED2, LEDState2);
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
}
