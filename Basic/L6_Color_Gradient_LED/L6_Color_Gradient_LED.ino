const int led = 3;
const int pot = A0;
 
void setup()
{
    // nothing to initialize
}
 
void loop()
{
    int val = analogRead(pot);              // get value from potentiometer
    val = map(val, 0, 1023, 0, 255);        // make the value to 0~255
    analogWrite(led, val);                  // set the pwm of led
    delay(10);
}
