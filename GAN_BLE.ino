#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Regexp.h>
#include <esp_task_wdt.h>
#include "BLEDevice.h"
#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#include "./variables.h"
#include "./functions.h"

void setup() {
  esp_task_wdt_init(5000, true);
  Serial.begin(115200);
  Serial.println("Welcome to Probudha's Rubik Cube Solver...");

  pinMode(4, INPUT_PULLDOWN);
  pinMode(5, OUTPUT);
  digitalWrite(5,HIGH);

  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

  Serial.print("Initialising BLE...");
  BLEDevice::init("");
  delay(500);
  Serial.println(F("Done."));

  // relayPin will be set HIGH when the cube is solved
//  pinMode(relayPin, OUTPUT);
//  digitalWrite(relayPin, LOW);

  // ledPin will be set HIGH when cube is connected
  pinMode(LED_BUILTIN, OUTPUT);

  u[4] = 'W';
  f[4] = 'G';
  l[4] = 'O';
  r[4] = 'R';
  b1[4] = 'B';
  d[4] = 'Y';
  mark_solved();

  print_pos();

  delay(10);
}


void loop() {
  sw=digitalRead(4);
  if(sw==1) {
    while(digitalRead(4)==1) {}
    home1();
    find_solution();
  }

  while (Serial.available()) {
    delay(2);  //delay to allow byte to arrive in input buffer
    char c = Serial.read();
    readString += c;
  }

  if (readString.length() > 0) {
    Serial.println(readString);
    if (readString == "L\n") left();
    else if (readString == "L'\n") left_dash();
    else if (readString == "R\n") right();
    else if (readString == "R'\n") right_dash();
    else if (readString == "U\n") top();
    else if (readString == "U'\n") top_dash();
    else if (readString == "D\n") down();
    else if (readString == "D'\n") down_dash();
    else if (readString == "B\n") back();
    else if (readString == "B'\n") back_dash();
    else if (readString == "F\n") front();
    else if (readString == "F'\n") front_dash();
    else if (readString == "rR\n") rotate_right();
    else if (readString == "rL\n") rotate_left();
    else if (readString == "rU\n") rotate_up();
    else if (readString == "rD\n") rotate_down();
    else if (readString == "home\n") home1();
    else if (readString == "hLR\n") hold_LR();
    else if (readString == "hUD\n") hold_UpDown();
    else if (readString == "h\n") hold_all();
    else if (readString == "test\n") test1();
    else if (readString == "solve\n") find_solution();

    else if (readString.length() > 6)  {
      /*Serial.println("Validating solution...");
        tempbool=validation();
        if (tempbool) {
        Serial.println("Validation done successfully. No error found in the solution. Will proceed to solve the cube.");

        }
        else  Serial.println("The solution string is incorrect. It should be as example L2 F1 U2 B2 R2 D3."); */
      int i = 0;
      Serial.println("within new elseif");
      //Serial.println(readString.length());
      while (i < readString.length() - 2) {
        Serial.println(readString[i + 1]);
        //for (tempint=49; tempint<=readString[i+1]; tempint++) {
        //Serial.println(readString[i]);

        if (readString == "LC\n") left();
        else if (readString == "LA\n") left_dash();
        else if (readString == "RC\n") right();
        else if (readString == "RA\n") right_dash();
        else if (readString == "FC\n") front();
        else if (readString == "FA\n") front_dash();
        else if (readString == "BC\n") back();
        else if (readString == "BA\n") back_dash();
        else if (readString == "UC\n") top();
        else if (readString == "UA\n") top_dash();
        else if (readString == "DC\n") down();
        else if (readString == "DA\n") down_dash();
        //}
        i = i + 3;
      }

    }
    else {
      sno = readString[0] - 48;
      deg = 0;
      for (tempint = 0; tempint <= readString.length() - 4; tempint++) {
        deg = deg * 10;
        deg = deg + readString[tempint + 2] - 48;
      }
      Serial.print("Servo No. ");
      Serial.print(sno);
      Serial.print(" Degree: ");
      Serial.println(deg);
      pwm.setPWM(sno, 0, deg);

    }

    readString = "";
  }

  if (deviceFound) {
    if (!connected) {
      connectToServer();
    }
  }
  else {
    scanForDevices();
  }

}
