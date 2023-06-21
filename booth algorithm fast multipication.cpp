#include <stdio.h>

// Function to perform fast multiplication using Booth's algorithm
int boothMultiplication(int multiplicand, int multiplier) {
    int product = 0;
    int ac = 0; // Accumulator
    int q_prev = 0; // Previous value of multiplier bit
    int Q = multiplier; // Copy of multiplier
    
    while (Q != 0) {
        int q0 = Q & 1; // Current multiplier bit
        
        if ((q0 == 1) && (q_prev == 0)) {
            ac = ac + multiplicand;
        } else if ((q0 == 0) && (q_prev == 1)) {
            ac = ac - multiplicand;
        }
        
        if ((q0 == 1) && (q_prev == 0)) {
            product = product - multiplicand;
        } else if ((q0 == 0) && (q_prev == 1)) {
            product = product + multiplicand;
        }
        
        Q = Q >> 1; // Right shift multiplier
        q_prev = q0; // Update previous multiplier bit
        multiplicand = multiplicand << 1; // Left shift multiplicand
    }
    
    return product;
}

int main() {
    int multiplicand, multiplier;
    
    printf("Enter the multiplicand: ");
    scanf("%d", &multiplicand);
    
    printf("Enter the multiplier: ");
    scanf("%d", &multiplier);
    
    int product = boothMultiplication(multiplicand, multiplier);
    
    printf("Product: %d\n", product);
    
    return 0;
}
