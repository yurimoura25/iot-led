#define LED 6
#define interval 500

unsigned long lastBlinkTime = 0;
unsigned long currentTime = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { 
  
  unsigned long currentTime = millis();
  
  if((currentTime - lastBlinkTime) >= interval) {
    
    lastBlinkTime = currentTime;
    digitalWrite(LED, HIGH);
  } else {
    
	digitalWrite(LED, LOW);
    
  }
  
}