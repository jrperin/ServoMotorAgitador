#include <Servo.h>
 
#define SERVO 4 // Porta Digital 4 PWM
#define led  13
 
Servo s; // Variavel Servo
int pos; // Posicao Servo
 
void setup ()
{
  Serial.begin(9600); 
  s.attach(SERVO);
  s.write(0); // Inicia motor posicao zero
  
  pinMode(13, OUTPUT);
}
 
void loop()
{
  for(pos = 0; pos < 90; pos += 3)
  {
    s.write(pos);
    digitalWrite(led, LOW);
    Serial.print("posicao 0 -> 90 = ");
    Serial.println(pos);
    delay(5);
    digitalWrite(led, HIGH);
    
  }
//delay(1000);
  for(pos = 90; pos >= 0; pos -= 3)
  {
    s.write(pos);
    digitalWrite(led, LOW);
    Serial.print("posicao 90 -> 0 = ");
    Serial.println(pos);
    delay(5);
    digitalWrite(led, HIGH);
    
  }
}
 
