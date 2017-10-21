#include <LiquidCrystal.h>
char trail[] = "TRAILBLAZERS";
char moto[] = "lead the leaders!";
char ann[] = "aaaaaa bbbb";
char chair[] = "ChairLady";
char sam[] = "cccccc dddd";
char vice[] = "Vice Chair";
char mash[] = "eeee fffff";
char org[] = "Organizing Sec";
char ron[] = "gggg hhhhhh";
char sec[] = "Secretary";
char nim[] = "iiiiii jjjjj";
char trea[] = "treasurer";
char fin[] = "Thank";
char last[] = "You!";
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {

  lcd.setCursor(2, 0);
    lcd.print(trail);
     lcd.setCursor(2, 1);
   lcd.print(moto);
  lcd.scrollDisplayLeft();
    delay(1500);
    lcd.clear();
    
  lcd.setCursor(2, 0);
    lcd.print(ann);
     lcd.setCursor(3, 1);
   lcd.print(chair);
   delay(1500);
    lcd.clear();

 
  lcd.setCursor(2, 0);
    lcd.print(sam);
     lcd.setCursor(2, 1);
   lcd.print(vice);
   lcd.scrollDisplayLeft();
   delay(1500);
    lcd.clear();

     
  lcd.setCursor(2, 0);
    lcd.print(mash);
     lcd.setCursor(2, 1);
   lcd.print(org);
   lcd.scrollDisplayLeft();
    delay(1500);
    lcd.clear();

  lcd.setCursor(3, 0);
    lcd.print(ron);
     lcd.setCursor(3, 1);
   lcd.print(sec);
   lcd.scrollDisplayLeft();
    delay(1500);
    lcd.clear();
    
    
  lcd.setCursor(2, 0);
    lcd.print(nim);
     lcd.setCursor(3, 1);
   lcd.print(trea);
   lcd.scrollDisplayLeft();
    delay(1500);
    lcd.clear();

    
  lcd.setCursor(4, 0);
    lcd.print(fin);
     lcd.setCursor(5, 1);
   lcd.print(last);
   lcd.scrollDisplayLeft();
    delay(1500);
    lcd.clear();
  }

