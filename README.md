#include "mbed.h"

int main() {
    // Initialize variables
    int a = 10, b = 20, c = 30;
    
    // Add values of a and b
    int d = a + b;
    
    // Print the value of variable d
    printf("Value of variable d (a + b): %d\n", d);
    
    // Subtract variable c from d
    int e = d - c;
    
    // Print the value of variable e
    printf("Value of variable e (d - c): %d\n", e);
    
    return 0;
}
