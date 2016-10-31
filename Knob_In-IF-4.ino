const int analogInPin = A0;  
int sensorValue = 0;      

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);

  if(sensorValue >= 0 && sensorValue <=170){
    Serial.print("FIRST RANGE: ");
  }
  else if(sensorValue >= 171 && sensorValue <=342){
    Serial.print("   SECOND RANGE: ");
  }
  else if(sensorValue >= 343 && sensorValue <=513){
    Serial.print("     THIRD RANGE: ");
  }
    else if(sensorValue >= 514 && sensorValue <=685){
    Serial.print("       FOURTH RANGE: ");
  }
    else if(sensorValue >= 686 && sensorValue <=856){
    Serial.print("         FIFTH RANGE: ");
  }
  else{
    Serial.print("            HIGHEST RANGE:");
  }

  // print the results to the serial monitor:
  //Serial.print(" sensor = ");
  Serial.println(sensorValue);
  
  delay(100);
}


