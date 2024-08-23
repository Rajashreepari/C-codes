#include <stdio.h>

int main() {
    int a, b, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Using Euclid's algorithm to find GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    printf("GCD = %d", gcd);
    return 0;
}
