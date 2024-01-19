
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID           "TMPLdQqEASk1"
#define BLYNK_DEVICE_NAME           "Home Automation"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

int relay1 = D1;
int relay2 = D2;
int relay3 = D3;
int relay4 = D4;

BLYNK_WRITE(V0) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(relay1, HIGH);
  } 
  else {
    digitalWrite(relay1, LOW);
  }
}

BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(relay2, HIGH);
  } 
  else {
    digitalWrite(relay2, LOW);
  }
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(relay3, HIGH);
  } 
  else {
    digitalWrite(relay3, LOW);
  }
}

BLYNK_WRITE(V3) {
  int pinValue = param.asInt();
  if (pinValue == 1) {
    digitalWrite(relay4, HIGH);
  } 
  else {
    digitalWrite(relay4, LOW);
  }
}
void setup()
{
   pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  Serial.begin(115200);
  delay(1000);  

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
