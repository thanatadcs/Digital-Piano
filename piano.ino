#include "pitches.h"

int pin[] = {2, 3, 4, 5};

int notes[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_G4};

void setup() {
  for (int i=0; i < 4; i++)
	pinMode(pin[i], INPUT_PULLUP);
}

void loop() {
  for (int i=0;i<4;i++)
    if (!digitalRead(pin[i]))
      tone(8, notes[i], 500);
}
