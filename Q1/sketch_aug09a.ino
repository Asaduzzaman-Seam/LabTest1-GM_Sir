const byte a = 0x02;
const byte b = 0x03; 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  long x = a + b;
  Serial.print("Hex = ");
  Serial.println(x);
  int y = (int)x;
  Serial.print("Int = ");
  Serial.println(y);

  for(int i = 0; i < y; i++)
  {
    Serial.print(i+1);
    Serial.println("----------");
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("ON");
    unsigned long myMills = millis();
    while(millis() - myMills < 2000)
    {}
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("OFF");
    unsigned long myMills2 = millis();
    while(millis() - myMills2 < 2000)
    {} 
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
