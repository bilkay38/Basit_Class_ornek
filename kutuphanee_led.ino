#include"Led.h"



 led lamba1(2);
 led kirmizilamba(13);
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    lamba1.start();
    delay(100);
    lamba1.stop();
    delay(100);

     Serial.println(lamba1.yazdir());

    kirmizilamba.start();
    delay(1000);
    kirmizilamba.stop();
    delay(1000);

}
