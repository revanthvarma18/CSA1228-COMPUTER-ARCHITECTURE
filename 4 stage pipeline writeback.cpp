#include <stdio.h>

int main() {
    int a = 20;
    int b = 12;
    int fetch, decode, execute, writeback;

    // Fetch stage
    fetch = a;

    // Decode stage
    decode = b;

    // Execute stage
    execute = fetch * decode;

    // Writeback stage
    writeback = execute;

    printf("Result: %d\n", writeback);

    return 0;
}
