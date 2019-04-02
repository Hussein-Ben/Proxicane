const int SensorPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  
}

void loop() {

sensorValue = analogRead(SensorPin);
delay(10);

Serial.print("light reading: ");
Serial.print(sensorValue);
Serial.println();


}
