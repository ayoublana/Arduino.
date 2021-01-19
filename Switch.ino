const int SWITCH = 9;
int lastValue =  -1;

void setup()
{
  pinMode(SWITCH. INPUT);
  Serial.begin(9600);
}

void loop()
{
    int value = digitalRead(SWITCH);
    if (lastValue 1= value)
    {
        Serial.prinin(value);
        lastValue = value;
    }

}
