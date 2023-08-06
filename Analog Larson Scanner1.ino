// ANALOG LARSON SCANNER MODIFICATION (PART 4)
//  Brandon Ackerman, RBT173

////////////////////////////////////////////
// GLOBAL VARIABLES:
int val = 0;

//////////////////////////////////////////////
// SETUP CODE:
void setup()

{ // Make pins 2-7 outputs
    for (int i = 2; i <= 7; i++)
    {
        pinMode(i, OUTPUT);
    }

    Serial.begin(9600); // Start the serial monitor
}

// MAIN CODE LOOP
void loop()

{

    clear(); // sets all LED's to LOW

    anlg();
    if (val >= 244)

    {
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
    }

    anlg();
    if (val >= 219)
    {
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
    }

    anlg();
    if (val >= 183)
    {
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
    }

    anlg();
    if (val >= 147)
    {
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
    }

    anlg();
    if (val >= 111)
    {
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
    }

    anlg();
    if (val >= 75)
    {
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
    }

    anlg();
    if (val >= 39)
    {
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
    }
    delay(10);
}
// END MAIN CODE LOOP

// Function for analogRead()
void anlg()
{
    val = analogRead(A1); // assign the variable analogRead "val" to pin A1

    // map the min/max values of the photoresistor/100Ohm circuit
    //(6-679) to the min/max 8 bit values of 0-255.
    val = map(val, 6, 679, 0, 255);

    Serial.println(val); // print to serial console
}

// Function to clear
void clear()
{
    // set pins 2-7 to LOW (OFF)
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    Serial.println("clear"); // prints "clear" to the serial console
}