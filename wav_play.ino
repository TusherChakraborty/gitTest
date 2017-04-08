#include <SPI.h>

#include <SPI.h>

#include <TMRpcm.h>

unsigned long startTime, totalTime;

TMRpcm tmrpcm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  tmrpcm.speakerPin = 11;
  if (!SD.begin(53)) {
  Serial.println("SD fail");
  return;
  }

  tmrpcm.setVolume(6);
  startTime = millis();
  tmrpcm.play("a.wav");
  while(tmrpcm.isPlaying())
  {
    }
  totalTime = millis()-startTime;
  Serial.println(totalTime);

}

void loop() {
  // put your main code here, to run repeatedly:

}
