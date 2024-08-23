#include <stdio.h>

int main()
 {
    char a[20];
    printf("Enter a string: ");
    scanf("%s", a);
    printf("First 10 characters: %.10s\n", a);
    return 0;
}
