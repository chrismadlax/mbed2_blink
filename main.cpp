#include "mbed.h"

DigitalOut L1(LED1);

int main() {
    while(1) {
        L1 = 1;
        wait(0.5);
        L1 = 0;
        wait(0.5);
	}
}
