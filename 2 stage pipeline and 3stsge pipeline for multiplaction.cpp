#include <stdio.h>

int main() {
    int stage1_output, stage2_output, stage3_output, final_output;
    
    // Stage 1
    stage1_output = 12;
    
    // Stage 2
    stage2_output = stage1_output;
    
    // Stage 3
    stage3_output = stage2_output * 4;
    
    // Final Output
    final_output = stage3_output;
    
    printf("Result: %d\n", final_output);
    
    return 0;
}
