float avg;
unsigned long currentMillis;
unsigned long startMillis;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  startMillis = millis();
  //float avg;
}

void loop() {
  // put your main code here, to run repeatedly:
  avg = ReadSens_and_Condition();
  currentMillis = (millis()-startMillis);
  Serial.print(currentMillis);
  Serial.print(",");
  Serial.print("5");
  Serial.print(",");
  Serial.println(avg);
  delay(500);
}



float ReadSens_and_Condition(){
  int i;
  float sval = 0;
  int randNum;

  for (i = 0; i < 5; i++){
    randNum = random(5,10);
    sval = sval + randNum;
    //sval = sval + analogRead(0);    // sensor on analog pin 0
    //Serial.println(sval);
    }
    
  sval = sval / 5;    // average
  //sval = sval / 4;    // scale to 8 bits (0 - 255) (uncomment when using sensor)
  //sval = 255 - sval;  // invert output  (uncomment when using sensor)
  return sval;
}
