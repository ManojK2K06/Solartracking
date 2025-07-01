#include <Wire.h>
#include <LiquidCrystal.h>
int rs=13,en=12,d4=14,d5=27,d6=26,d7=25;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int m1=18;
int m2=19;
int ldr1=22;
int ldr2=23;
void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(ldr1,INPUT);
pinMode(ldr2,INPUT);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("SOLAR TRACKING");
 lcd.setCursor(0,1);
 lcd.print("SYSTEM");
 digitalWrite(m1,LOW);
 digitalWrite(m2,LOW);
 Serial.println("SOLAR TRACKING SYSTEM");
 delay(2000);
}
void loop()
{
SOLAR_ROTATION();
}
void SOLAR_ROTATION()
{
 int ldr1val=digitalRead(ldr1);
 int ldr2val=digitalRead(ldr2);

Serial.println("LDR1:"+String(ldr1val)+","+"LDR2:"+String(ldr2val));
 delay(500);
 if(ldr1val==LOW)
 {
// Serial.print("A");
 lcd.clear();
 lcd.print("LIGHT INTENSITY");
 lcd.setCursor(0,1);
 lcd.print("ON RIGHT SIDE");
 digitalWrite(m1,HIGH);
 digitalWrite(m2,LOW);
 delay(200);
 digitalWrite(m1,LOW);
 digitalWrite(m2,LOW);
 delay(100);
 }
else if(ldr2val==LOW)
 {
// Serial.print("B");
 lcd.clear();
 lcd.print("LIGHT INTENSITY");
 lcd.setCursor(0,1);
 lcd.print("ON LEFT SIDE");
 digitalWrite(m1,LOW);
 digitalWrite(m2,HIGH);
 delay(200);
 digitalWrite(m1,LOW);
 digitalWrite(m2,LOW);
 delay(100);
 }
 else if(ldr2val==LOW && ldr1val==LOW)
 {
// Serial.print("B");
 lcd.clear();
 lcd.print("LIGHT INTENSITY");
 lcd.setCursor(0,1);
 lcd.print("ON BOTH SIDE");
 digitalWrite(m1,LOW);
 digitalWrite(m2,LOW);
 delay(800);
 }
 else
 {
 digitalWrite(m1,LOW);
 digitalWrite(m2,LOW);
// digitalWrite(m3,LOW);
// digitalWrite(m4,LOW);
 }
}
