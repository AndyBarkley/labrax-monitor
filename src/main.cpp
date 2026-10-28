#include <Arduino.h>

void setup()
{
    Serial.begin(115200);

    delay(1000);

    Serial.println();
    Serial.println("================================");
    Serial.println(" Lab Rax Deployment Monitor");
    Serial.println(" ESP32-C6 Startup");
    Serial.println("================================");
}

void loop()
{
    static uint32_t counter = 0;

    Serial.printf("Heartbeat %lu\n", counter++);

    delay(5000);
}