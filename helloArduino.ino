/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */
 
 #include <stdio.h>
 
int a = 5;
double b = 2.5;
int c = 2;
 String mystring, mystring2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  while(!Serial)
  {
  }
  mystring = String("a*b =");

  
}

// the loop routine runs over and over again forever:
void loop() {
  // print out the value you read:
  
  // concatenation
  mystring2 = mystring + (int)a*c;
  Serial.println(mystring2);
  delay(1000);        // delay in between reads for stability
  
  //a double
  Serial.println(b);
  delay(1000);
  
  // exponent
  Serial.println(pow(a,c));
  delay(1000);
  
  // modulus
  Serial.println(a%c);
  delay(1000);
  
  // using stdio 
  char buffer[32];
  sprintf(buffer,"HELLO %d", a);
  
  Serial.println(buffer);
  
}
