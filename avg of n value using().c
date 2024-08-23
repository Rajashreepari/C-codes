#include <stdio.h>

double avg(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x;
        scanf("%lf", &x);
        sum += x;
    }
    return sum / n;
}

int main() {
    int n;
    printf("Enter number of values: ");
    scanf("%d", &n);
    double a = avg(n);
    printf("Average of %d values is %.2f\n", n, a);
    return 0;
}
