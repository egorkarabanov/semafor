#define LED_R_PIN 5
#define LED_G_PIN 6
#define SW_PIN 4

void setup(){
  pinMode(LED_R_PIN,OUTPUT);
  pinMode(LED_G_PIN,OUTPUT);
  pinMode(SW_PIN,INPUT);

  digitalWrite(LED_R_PIN,HIGH);
  digitalWrite(LED_G_PIN,HIGH);
  
}
void loop(){
  digitalWrite(LED_G_PIN,HIGH);
  digitalWrite(LED_R_PIN,LOW);
  delay(1000);
  digitalWrite(LED_G_PIN,LOW);
  delay(1000);
  digitalWrite(LED_R_PIN,HIGH);
  delay(1000);



}

  
  
