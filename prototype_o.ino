#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
// seconds value.
int seconds = 30;
// minutes value.
int minutes = 0;
// hours value.
int hours = 8;
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
// seconds value.
int seconds = 30;
// minutes value.
int minutes = 0;
// hours value.
int hours = 8;

bool alarm=false;

int sensorPin = A0;
int sensorValue = 0;

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setRGB(colorR, colorG, colorB);
    // Print a message to the LCD.
  lcd.print("Current Time -  ");
  delay(1000);
  //alarm time set below
while(minutes<2)
{
  if(seconds < 60){
    delay(1000);
    seconds=seconds+1;
  }
  else{
    seconds=00;
  }
  if(seconds>59){
    minutes=minutes+1;    
  }
  else{
    minutes=minutes;
  }
  if(minutes<60){
    minutes=minutes;
    seconds=seconds;
  }
  else{
    minutes=0;
    seconds=seconds+1;
    hours=hours+1;
  }
  if(hours<24){
    hours=hours;
  }
  else{
    hours=0;
  }
  lcd.setCursor(0, 1);
  lcd.print(hours);
  lcd.print(":");
  lcd.print(minutes);
  lcd.print(":");
  lcd.print(seconds);
}
}
void loop()
//Below sets alarm off
{
  if (hours = 8 &&( minutes = 2)){
  alarm=true;}
  //Weather conditions that determine which LED will light
  char weather = "cold";
  //LEDS y'all
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(6, OUTPUT); //red
  pinMode(7, OUTPUT); //blue
  pinMode(8, OUTPUT); //green
  
  if (alarm = true && (weather="cold")){ 
    digitalWrite(8,HIGH);
    lcd.clear();
    lcd.print("ALARM");
    }
  else if(alarm = true && (weather="rain")) {
    digitalWrite(7,HIGH);
    lcd.clear();
    lcd.print("ALARM");
    }
  else if(alarm = true && (weather="hot")){
    digitalWrite(6,HIGH);
    lcd.clear();
    lcd.print("ALARM");}
   int buzzer = 5;
  if (alarm = true){
  tone(buzzer,1915);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(buzzer,1700);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(buzzer,1519);
  delay(1000);
  tone(buzzer,1432);
  delay(1000);
  tone(buzzer,1275);
  delay(1000);
  tone(buzzer,1136);
  delay(1000);
  tone(buzzer,1014);
#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
// seconds value.
int seconds = 30;
// minutes value.
int minutes = 0;
// hours value.
int hours = 8;
  lcd.begin(16, 2);
  lcd.setRGB(colorR, colorG, colorB);
    // Print a message to the LCD.
  lcd.print("Current Time -  ");
  delay(1000);
  //alarm time set below
while(minutes<2)
{
  if(seconds < 60){
    delay(1000);
    seconds=seconds+1;
  }
  else{
    seconds=00;
  }
  if(seconds>59){
    minutes=minutes+1;    
  }
  else{
    minutes=minutes;
  }
  if(minutes<60){
    minutes=minutes;
    seconds=seconds;
  }
  else{
    minutes=0;
    seconds=seconds+1;
    hours=hours+1;
  }
  if(hours<24){
    hours=hours;
  }
  else{
    hours=0;
  }
  lcd.setCursor(0, 1);
  lcd.print(hours);
  lcd.print(":");
  lcd.print(minutes);
  lcd.print(":");
  lcd.print(seconds);
}
}
void loop()
//Below sets alarm off
{
  if (hours = 8 &&( minutes = 2)){
  alarm=true;}
  //Weather conditions that determine which LED will light
  char weather = "cold";
  //LEDS y'all
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(6, OUTPUT); //red
  pinMode(7, OUTPUT); //blue
  pinMode(8, OUTPUT); //green
  
  if (alarm = true && (weather="cold")){ 
    digitalWrite(8,HIGH);
    lcd.clear();
    lcd.print("ALARM");
    }
  else if(alarm = true && (weather="rain")) {
    digitalWrite(7,HIGH);
    lcd.clear();
    lcd.print("ALARM");
    }
  else if(alarm = true && (weather="hot")){
    digitalWrite(6,HIGH);
    lcd.clear();
    lcd.print("ALARM");}
   int buzzer = 5;
  if (alarm = true){
  tone(buzzer,1915);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(buzzer,1700);
  delay(1000); // Wait for 1000 millisecond(s)
  tone(buzzer,1519);
  delay(1000);
  tone(buzzer,1432);
  delay(1000);
  tone(buzzer,1275);
  delay(1000);
  tone(buzzer,1136);
  delay(1000);
  tone(buzzer,1014);
  delay(1000);
  tone(buzzer,0);
  delay(1000);}

  //alarm deactivation via touch sensor
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 100) {
    exit(0);
  }
}
