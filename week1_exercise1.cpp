#include "mbed.h"
DigitalIn button(BUTTON1);
DigitalOut led(LED1);

int main() {
    while (true) {
        
        led = button.read();
        
        if(led == 1) {
            
            printf("Blink! LED is now %d\n", led.read());
        }
        
        else{
            printf("Blink! LED is now %d\n", led.read());
        }

        wait_ms(500);
    }
}
