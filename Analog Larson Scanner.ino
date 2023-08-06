// ANALOG LARSON SCANNER MODIFICATION (PART 4)
//  Brandon Ackerman, RBT173

////////////////////////////////////////////
// GLOBAL VARIABLES:

// global variable for delay time adjustment.
int delayTime = 250; // I wanted it to go faster, so I assigned it a value of 200ms.
int endLED = 13;
int stLED = 0;
int val = 0;

//////////////////////////////////////////////
// SETUP CODE:

void setup()
{
    // for loop to make pins 2-7 outputs. Starts with pin 2, adds another output(up to 7)as the code loops.
    for (int i = stLED; i <= endLED; i++)
    {
        pinMode(i, OUTPUT); // assigns int "i" as a output.
    }

    Serial.begin(9600); // Start the serial monitor
}
/////////////////////////////////////////////
// MAIN CODE LOOP:

void loop()
{

    for (int i = stLED; i <= endLED; i++) // if "i" is equal to pin 2 and is less than or equal to pin 7, add an output incrementally up to pin 7.
    {
        digitalWrite(i, HIGH); // turn on pins as defined in line above.
anlg();
        if (i == stLED) // if int i is equal to pin 2, set pin 7 to low
        {
            digitalWrite(endLED, LOW); // turn off pin 7
            anlg();
        }
        else
        {
            digitalWrite(i - 1, LOW); // incrementally turn off pins.
            anlg();
        }
        delay(delayTime); // delay time set by global variable.
    }
    for (int i = (endLED - 1); i >= (stLED + 1); i--) // if "i" is equal to pin 6 and is greater than or equal to pin 3, remove outputs incrementally up to pin 7.
    {
        digitalWrite(i, HIGH);
        anlg();
        digitalWrite(i + 1, LOW); // incrementally turn off pins.
        delay(delayTime);         // delay time set by global variable.
    }

    // portion needed to fix timing on pin 3 LED.

    if (int i = (stLED + 1))
    {
        digitalWrite((stLED + 1), LOW);
        anlg();
    }
}

void anlg()
{
	val = analogRead(A1);
	Serial.println(val);
}

/*
if val <= 300, digitalWrite(pin, value);
clear the board first
else if's going down the __LINE
wait 100ms then have it check it again.
do highest first */


if (val <= 244)
    {
        digitalWrite(2,3,4,5,6,7, HIGH);
    }
if (val <= 219)
{
    digitalWrite(7,LOW);
}
if (val <= 183)
{
    digitalWrite(7,6, LOW);
}
if (val <= 147)
{
    digitalWrite(7,6,5, LOW);
}


