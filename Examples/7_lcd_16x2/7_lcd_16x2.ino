#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);
int i = 0;

void setup() 
{
  lcd.init();                
  lcd.backlight();    
  lcd.home();  
}
void loop() 
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello world!");
  delay(3000);  
}
