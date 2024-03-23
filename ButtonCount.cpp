#include "mbed.h"

DigitalIn button(PC_13);

volatile int pressCount = 0;

int prevButtonState = 0;

int main() {
    // Prints in the terminal
    printf("Press the button to count!\n");

    // loop to keep the program running
    while(1) {
        // Read the state of the button
        int currentButtonState = button;

        // Checks if the button was pressed (not just held down)
        if (currentButtonState == 1 && prevButtonState == 0) {
            pressCount++;
            printf("Press count: %d\n", pressCount); // Print the count of button presses
        }

        
        prevButtonState = currentButtonState;
      
        wait_us(1);
    }
}