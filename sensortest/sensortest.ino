void setup() {
Serial.begin(9600);
}

void loop() {
int sensortest = analogRead(A5);
Serial.println(sensortest);}
