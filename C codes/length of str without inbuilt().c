#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // read the entire string until a newline character is encountered

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d", length);
    return 0;
}
