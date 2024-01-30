const int Sensor = 4;
const int LED = 7;

void setup() {
Serial.begin(9600);
pinMode(Sensor, INPUT);
pinMode(LED, OUTPUT);
}
void loop() {
// Detect motion
int Motion =
digitalRead(Sensor);
// Process the detection
if (Motion == HIGH) {
Serial.println("Motion Detected!");
digitalWrite(LED, HIGH);
delay(2000);
} else {
Serial.println("No Motion Detected");
digitalWrite(LED, LOW);
}
delay(500);
}
