#include <Arduino.h>

void setup()
{
    Serial.begin(115200);

    delay(1000);

    Serial.println("Lab Rax Monitor Starting");
}

void loop()
{
    delay(5000);
    Serial.println("Alive");
}