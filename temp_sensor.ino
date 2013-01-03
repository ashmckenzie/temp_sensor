
void setup() {
  
  Serial.begin(9600);
}

void loop(){

  int seconds = 1000;
  
  int tempSensorAnalogPin = 0;
  float offsetKtoC = 268.15;

  float tempK = analogRead(tempSensorAnalogPin) * 0.004882812 * 100;
  float tempC = tempK - offsetKtoC;
  
  Serial.print("Temperature in °C: "); Serial.println(tempC);
  
  delay(10 * seconds);
}
