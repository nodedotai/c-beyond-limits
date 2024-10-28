#include <stdio.h>

int main() {
    int a = 5;  // (binary: 0101)
    int b = 3;  // (binary: 0011)

    // Bitwise operators
    int bitwise_and = a & b;   // Bitwise AND
    int bitwise_or = a | b;    // Bitwise OR
    int bitwise_xor = a ^ b;   // Bitwise XOR

    // Logical operators
    int logical_and = (a > 0) && (b > 0); // Logical AND
    int logical_or = (a > 0) || (b < 0);  // Logical OR

    // Output results
    printf("Bitwise AND (a & b): %d\n", bitwise_and);         // Output: 1
    printf("Bitwise OR (a | b): %d\n", bitwise_or);           // Output: 7
    printf("Bitwise XOR (a ^ b): %d\n", bitwise_xor);         // Output: 6

    printf("Logical AND (a > 0 && b > 0): %d\n", logical_and); // Output: 1 (true)
    printf("Logical OR (a > 0 || b < 0): %d\n", logical_or);   // Output: 1 (true)

    return 0;
}
