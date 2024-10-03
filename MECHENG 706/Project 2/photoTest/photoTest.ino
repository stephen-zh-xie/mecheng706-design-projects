int photoPin1 = A11;

//Serial Pointer
HardwareSerial *SerialCom;

void setup() {
  // put your setup code here, to run once:
  pinMode(photoPin1, INPUT);
  int photoVal1 = 0;

  SerialCom = &Serial;
  SerialCom->begin(115200);
  SerialCom->println("Photodiode testing");
  delay(1000);
  SerialCom->println("Setup....");
}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal1 = analogRead(photoPin1);
  SerialCom->println(photoVal1);
}
