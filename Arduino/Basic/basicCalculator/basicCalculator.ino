#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
float num1, num2, ans;

char op;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter 1st num");

  while(Serial.available()==0){

  }
  num1 = Serial.parseFloat();

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter 2nd num");

  while(Serial.available()==0){

  }
  num2 = Serial.parseFloat();

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter operator");

  while(Serial.available()==0){

  }
  op = Serial.read();

  if(op == '+'){
    ans = num1+num2;
  }
  if(op == '-'){
    ans = num1-num2;
  }
  if(op == '*'){
    ans = num1*num2;
  }
  if(op == '/'){
    ans = num1/num2;
  }

  lcd.clear();
  delay(500);
  lcd.setCursor(0,0);
  lcd.print(num1);
  lcd.print(op);
  lcd.print(num2);
  lcd.print("=");
  lcd.print(ans);
  delay(5000);
}
