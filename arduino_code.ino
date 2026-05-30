#define LED_HIGH 13    // Blue LED - High Temperature (>=30°C)
#define LED_LOW 12     // White LED - Low Temperature (<30°C)

String inputString = "";
boolean stringComplete = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_HIGH, OUTPUT);
  pinMode(LED_LOW, OUTPUT);
  
  Serial.println("=================================");
  Serial.println("Weather Monitor Simulator Ready");
  Serial.println("=================================");
  Serial.println("Enter temperature value (e.g., 28 or 35):");
}

void loop() {
  if (stringComplete) {
    int temperature = inputString.toInt();
    
    Serial.print("Received Temperature: ");
    Serial.print(temperature);
    Serial.println("°C");
    
    if (temperature >= 30) {
      digitalWrite(LED_HIGH, HIGH);
      digitalWrite(LED_LOW, LOW);
      Serial.println("Status: HIGH TEMPERATURE (>=30°C) - Blue LED ON");
    } else {
      digitalWrite(LED_HIGH, LOW);
      digitalWrite(LED_LOW, HIGH);
      Serial.println("Status: NORMAL TEMPERATURE (<30°C) - White LED ON");
    }
    
    Serial.println("\nEnter next temperature value:");
    
    inputString = "";
    stringComplete = false;
  }
}

void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    if (inChar == '\n') {
      stringComplete = true;
    } else if (inChar != '\r') {
      inputString += inChar;
    }
  }
}
