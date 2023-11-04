const int smokeSenzor = 4;
const int totalparticles = 1000000;
void setup() {
  Serial.begin(115200);
}
void loop() {
  int digitalNumber = analogRead(smokeSenzor);
  // double percentage= (double) digitalNumber*100/totalparticles;
  Serial.println(digitalNumber);
  delay(500);
}