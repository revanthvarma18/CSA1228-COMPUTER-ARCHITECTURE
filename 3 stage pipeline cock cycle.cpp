#include <stdio.h>

int main() {
    int operand1 = 10;
    int operand2 = 5;
    int result = 0;
    int clock_cycles = 0;
    
    // Fetch stage
    clock_cycles++;
    
    // Decode stage
    clock_cycles++;
    
    // Execute stage
    result = operand1 + operand2;
    clock_cycles++;
    
    printf("Result: %d\n", result);
    printf("Total clock cycles: %d\n", clock_cycles);
    
    return 0;
}
