const int LED_A  =  6;
const int LED_B  =  7;
const int LED_C  = 10;
const int LED_D  = 11;
const int LED_E  = 12;
const int LED_F  =  5;
const int LED_G  =  4;
const int LED_DP =  9;
const int TIME_DELAY =10000;
int teller =0;

void setup()
{
    pinMode(LED_A, OUTPUT);
    pinMode(LED_B, OUTPUT);
    pinMode(LED_C, OUTPUT);
    pinMode(LED_D, OUTPUT);
    pinMode(LED_E, OUTPUT);
    pinMode(LED_F, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_DP, OUTPUT);
    ShowValueOnDisplay(-1);
}

void loop()
{
 ShowValueOnDisplay( teller);
 teller = teller + 1;
 delay(TIME_DELAY);
}

void ShowValueOnDisplay( int getal )
{
  int cijfer = getal % 10;

  if (cijfer <0 )
  {
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_B, LOW);
    digitalWrite(LED_C, LOW);
    digitalWrite(LED_D, LOW);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_DP, HIGH);

  }
  else if ( cijfer== 0)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, HIGH);
    digitalWrite(LED_F, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 1)
  {
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, LOW);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 2)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, LOW);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, HIGH);
    digitalWrite(LED_F, LOW);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 3)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, LOW);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 4)
  {
    digitalWrite(LED_A, LOW);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, LOW);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 5)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, LOW);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 6)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, LOW);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, HIGH);
    digitalWrite(LED_F, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 7)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, LOW);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 8)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, HIGH);
    digitalWrite(LED_F, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }
  else if ( cijfer== 9)
  {
    digitalWrite(LED_A, HIGH);
    digitalWrite(LED_B, HIGH);
    digitalWrite(LED_C, HIGH);
    digitalWrite(LED_D, HIGH);
    digitalWrite(LED_E, LOW);
    digitalWrite(LED_F, HIGH);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_DP, HIGH);



  }

}
