#include <stdio.h>

int main() {
    int a = 5;  // (binary: 0101)
    int b = 3;  // (binary: 0011)

    int result1 = a & b;  // (binary: 0001) => result is 1
    int result2 = a | b;  // (binary: 0111) => result is 7
    int result3 = a ^ b;  // (binary: 0110) => result is 6
    int result4 = ~a;     // (binary: 1010) => result is -6 (in 2's complement)
    int result5 = a << 1; // (binary: 1010) => result is 10
    int result6 = a >> 1; // (binary: 0010) => result is 2

    // Print results with labels
    printf("Bitwise AND (a & b): %d\n", result1);
    printf("Bitwise OR (a | b): %d\n", result2);
    printf("Bitwise XOR (a ^ b): %d\n", result3);
    printf("Bitwise NOT (~a): %d\n", result4);
    printf("Left Shift (a << 1): %d\n", result5);
    printf("Right Shift (a >> 1): %d\n", result6);
    
    return 0; // Return statement to indicate successful completion
}
