#define powPin  7
#define sensorPin  5

int sensorVal = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(powPin, OUTPUT);
  pinMode(sensorPin, INPUT);

  digitalWrite(powPin, HIGH);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVal = digitalRead(sensorPin);

  Serial.println(sensorVal);
}
