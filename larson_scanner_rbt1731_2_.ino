//Larson Scanner 2, RBT173
//Brandon Ackerman
  
boolean firstOn; //use this for the reverse thing
int LEDOn;
int LEDPins[6] = {2,3,4,5,6,7};
/////////////////////////////////

void setup() 
{
  
  for (int i = 0; i < 6; i++)
  {
    pinMode(LEDPins[i], OUTPUT);
  }
       LEDOn = 2;

      firstOn = true; //use this for the reverse thing

}    

///////////////////////////////////

void loop()

//use this for the reverse thing
// {  
//if (firstOn) 
// {
//   digitalWrite(2, HIGH);
// }
// else
// {
//   digitalWrite (2, LOW);
// }
// if (!firstOn)
// {
//   digitalWrite (3, HIGH);
// }
// else
// {
//   digitalWrite (3, LOW);
// }
// delay (1000);
// firstOn = !firstOn;
// }

{
    for(LEDOn=2; LEDOn <8; LEDOn++)
    {
    digitalWrite(LEDOn, HIGH);
    delay(200); // Wait for 1000 millisecond(s)
    digitalWrite(LEDOn, LOW);
    }
}
