const int pinLED = 3;                      // LED connect to D13
 
const int btnOn  = 5;                       // button on
const int btnOff = 6;                       // button off
 
void setup()
{
    pinMode(pinLED, OUTPUT);                // set direction of D13-OUTPUT
    pinMode(btnOff, INPUT);                 // set direction of D2-INPUT
    pinMode(btnOn, INPUT);
}
 
void loop()
{
    if(0 == digitalRead(btnOn))            // button on pressed
    {
        digitalWrite(pinLED, HIGH);
    }
 
    if(0 == digitalRead(btnOff))
    {
        digitalWrite(pinLED, LOW);
    }
}
