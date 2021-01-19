const int LED_RED1    =  8;
const int LED_GREEN1  =  9;
const int LED_BLUE1   =  10;
const int LED_RED2    =  3;
const int LED_GREEN2  =  5;
const int LED_BLUE2   =  4;
const int TIME_DELAY = 1000;

void setup()
{
  pinMode( LED_RED1,	  OUTPUT);
  pinMode( LED_GREEN1, OUTPUT);
  pinMode( LED_BLUE1,  OUTPUT);
  pinMode( LED_RED2,  OUTPUT);
  pinMode( LED_GREEN2,OUTPUT);
  pinMode( LED_BLUE2, OUTPUT);
}

void loop()
{
  int red1   = random(0, 255);
  int green1 = random(0, 255);
  int blue1  = random(0, 255);
  int red2   = 255 - red1;
  int green2 = 255 - green1;
  int blue2  = 255 - blue1;

  analogWrite(LED_RED1,   red1);
  analogWrite(LED_GREEN1, green1);
  analogWrite(LED_BLUE1,  blue1);
  analogWrite(LED_RED2,   red2);
  analogWrite(LED_GREEN2, green2);
  analogWrite(LED_BLUE2,  blue2);

  delay( TIME_DELAY) ;
}
