/*

  E18-D80NK Infrared Obstacle Avoidance Sensor


  Sensor Wiring:
  Brown: 5V DC
  Blue:  GNG
  Black: Signal, to PIN 2

  output readings:
  0 = object detected
  1 = all clear
*/
int sensor = 2;

void setup() {
  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(sensor, INPUT_PULLUP);// define pin as Input sensor
}

void loop() {
  int reading = digitalRead(sensor); // read the sensor
  //Serial.println(reading);
  
  if (reading == 0) {
    Serial.println("Obstacle detected");
  }
  
  else {
    Serial.println("=== All clear");
  }
  delay(10);
}
