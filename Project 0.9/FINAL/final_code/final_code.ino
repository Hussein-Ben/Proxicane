// I've adapted the code from Rui Santos, https://randomnerdtutorials.com
// the ultrasonic sensor used in this porject is the HC-SR04

int trigPin = 9;    // Trigger - ultrasound waves beamed out
int echoPin = 8;    // Echo - listening for the wave that was beamed out
int vibrate_power = 10; // pin that supplies power to the vibrate function
int collision_distance = 90;  // the distance from an object, the user coul collide with

long duration; // time in microseconds since firing a pulse and recieving a pulse
long distance; // constantly measured - this value is not 100% accurate but it is suffcient for object avoidance

void setup() {
  //Serial Port begin
  Serial.begin (9600);
  
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(vibrate_power, OUTPUT);
}

void loop() {
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);

  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // Convert the time into a distance
  // distance = (time/2) x speed of sound
  // The speed of sound is: 343m/s = 0.0343 cm/uS
  
  distance = (duration / 2) * 0.0343;   

  // duration is divided by 2 first because the the wave was sent, 
  // collided with the object, and then returned back to the echosensor

  Serial.print(distance);
  Serial.print("cm");
  Serial.println();

  
  if (distance < collision_distance ) {  // warn user there going to collide with an object
    Serial.println("collision");
    digitalWrite(vibrate_power, HIGH); // physicially warn user
    delay(100); 
  } else { // stops false reading 
    digitalWrite(vibrate_power, LOW);
  }
 
}
