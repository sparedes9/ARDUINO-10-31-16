const int analogInPin = A0;  
int sensorValue = 0;      

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);

  if(sensorValue >= 0 && sensorValue <=255){
    Serial.print("FIRST RANGE: ");
  }
  else if(sensorValue >= 256 && sensorValue <=615){
    Serial.print("   SECOND RANGE: ");
  }
  else if(sensorValue >= 616 && sensorValue <=870){
    Serial.print("     THIRD RANGE: ");
  }
  else{
    Serial.print("        HIGHEST RANGE:");
  }

  // print the results to the serial monitor:
  //Serial.print(" sensor = ");
  Serial.println(sensorValue);
  
  delay(10);
}
