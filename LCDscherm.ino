#include <LiquidCrystal.h>

const int LCD_RS = 2;
const int LCD_ENABLE = 3;
const int LCD_D4 = 4;
const int LCD_D5 = 5;
const int LCD_D6 = 6;
const int LCD_D7 = 7;

LiquidCrystal lcd1(LCD_RS, LCD_ENABLE,
                   LCD_D4, LCD_D5, LCD_D6,LCD_D7);

void setup()
{
  lcd1.begin(16, 2);
  lcd1.print("hello, world");
}

void loop()
{
  lcd1.setCursor(0, 1);
  lcd1.print(millis() / 1000);
}
