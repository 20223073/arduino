// 20223073 만다흐자야
#define PIN_LED 13
unsigned int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hellow World!");
  count = 0;
}

void loop() {
  Serial.println(++count);
  digitalWrite(PIN_LED, HIGH);   
  delay(1000);                      
  digitalWrite(PIN_LED, LOW);   
  delay(1000); 
}
