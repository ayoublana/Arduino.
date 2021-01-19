const int ANALOG_INPUT = A2;
const int PORT_LED = 3;
const int BAUDRATE = 9600;
int lastValue = -1;

void setup()
{
    Serial.begin( BAUDRATE );
    pinMode( PORT_LED, OUTPUT );
}

void loop()
{
    int value = analogRead( ANALOG_INPUT );
    value = map(value, 0, 1023, 0, 255);
    if (value != lastValue)
    {
        Serial.println(value);
        analogWrite ( PORT_LED, value );
        lastValue = value;
    }
    delay(100);
}
