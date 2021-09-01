String name = ""; // declaring a variable for containing the name.

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {



  while (Serial.available() == 0 && name == NULL) // takes input through serial port
  {
    Serial.println("Enter your first name ");
    name = Serial.readString();
    if (name != NULL)
    {
      Serial.println(name);
      break;
    }
  }
  int str_len = name.length() - 1; // calculates the length of name

  for (int i = 0; i < str_len; i++) // Converts the name into char and Uses function to blink led
  {
    Serial.println(name[i]);
    Morse(name[i]);
  }

  delay(10000);

}

void Dash() // Code for displaying a single dash
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1200);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

void Dot() // Function for dot
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(400);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
}

void Morse(char alph) // Contains the data about each individual character and its morse vale.
{
  if (alph == 'a')
  {
     Dot();
    Dash();
  
  }

  if (alph == 'b')
  {
    Dash();
    Dot();
    Dot();
    Dot();
  }

  if (alph == 'c')
  {
    Dash();
    Dot();
    Dash();
    Dot();
  }

  if (alph == 'd')
  {
    Dash();
    Dot();
    Dot();
  }

  if (alph == 'e')
  {
    Dot();
  }

  if (alph == 'f')
  {
    Dot();
    Dot();
    Dash();
    Dot();
  }

  if (alph == 'g')
  {
    Dash();
    Dash();
    Dot();
  }

  if (alph == 'h')
  {
    Dot();
    Dot();
    Dot();
    Dot();
  }

  if (alph == 'i')
  {
    Dot();
    Dot();
  }

  if (alph == 'j')
  {
    Dot();
    Dash();
    Dash();
    Dash();
  }

  if (alph == 'k')
  {
    Dash();
    Dot();
    Dash();
  }

  if (alph == 'l')
  {
    Dot();
    Dash();
    Dot();
    Dot();
  }

  if (alph == 'm')
  {
    Dash();
    Dash();
  }

  if (alph == 'n')
  {
    Dash();
    Dot();
  }

  if (alph == 'o')
  {
    Dash();
    Dash();
    Dash();
  }

  if (alph == 'p')
  {
    Dot();
    Dash();
    Dash();
    Dot();

  }

  if (alph == 'q')
  {
    Dash();
    Dash();
    Dot();
    Dash();
  }

  if (alph == 'r')
  {

    Dot();
    Dash();
    Dot();
  }

  if ( alph == 's')
  {
    Dot();
    Dot();
    Dot();
  }

  if (alph == 't')
  {
    Dot();
    Dot();
    Dot();
    Dot();
  }

  if (alph == 'u')
  {
    Dot();
    Dot();
    Dash();
  }

  if (alph == 'v')
  {
    Dot();
    Dot();
    Dot();
    Dash();
  }

  if (alph == 'w')
  {

    Dot();
    Dash();
    Dash();
  }

  if (alph == 'x')
  {
    Dash();
    Dot();
    Dot();
    Dash();
  }

  if (alph == 'y')
  {
    Dash();
    Dot();
    Dash();
    Dash();
  }

  if (alph == 'z')
  {
    Dash();
    Dash();
    Dot();
  }
}

