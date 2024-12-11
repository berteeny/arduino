const int ledPin = 26; // The GPIO pin for the LED

// initialize receivedSTring - will be reused for future iterations
String receivedString = "";

// the setup function runs once when you press reset or power the board
void setup() {

  // initialize digital pin ledPin as an output.
  pinMode(ledPin, OUTPUT);
  //begin serial
  Serial.begin(9600);

}
// the loop function runs over and over again forever
void loop() {

//if serial port is receiving information
  if(Serial.available() > 0) {
    // assign value of recievedString to be newest received character from web page
    receivedString = char(Serial.read());
  }

      // for testing vv
      // Serial.println(receivedString);

      if(receivedString == "1") {
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW);
        delay(500);
      } else {
        digitalWrite(ledPin, LOW);
      }

}
