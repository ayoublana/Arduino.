const int LED_RED    =  4;
const int LED_GREEN  =  5;
const int LED_BLUE   =  6;
const int TIME_DELAY = 1000;

void setup()
{
  pinMode( LED_RED,	  OUTPUT);
  pinMode( LED_GREEN, OUTPUT);
  pinMode( LED_BLUE,  OUTPUT);
}

void loop()
{
  int red   = random(0, 255);
  int green = random(0, 255);
  int blue  = random(0, 255);

  analogWrite(LED_RED,   red);
  analogWrite(LED_GREEN, green);
  analogWrite(LED_BLUE,  blue);

  delay( TIME_DELAY) ;
}
