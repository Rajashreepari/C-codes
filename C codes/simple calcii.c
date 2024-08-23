#include <stdio.h>
int main()
 {
   int num1, num2, result;
   printf("Enter the first number: ");
   scanf("%d", &num1);
   printf("Enter the second number: ");
   scanf("%d", &num2);
   // Addition
   result = num1 + num2;
   printf("Addition: %d + %d = %d\n", num1, num2, result);
   // Subtraction
   result = num1 - num2;
   printf("Subtraction: %d - %d = %d\n", num1, num2, result);
   // Multiplication
   result = num1 * num2;
   printf("Multiplication: %d * %d = %d\n", num1, num2, result);
   // Division
   result = num1 / num2;
   printf("Division: %d / %d = %d\n", num1, num2, result);
   // Modulus
   result = num1 % num2;
   printf("Modulus: %d %% %d = %d\n", num1, num2, result);
   // Square
   result = num1 * num1;
   printf("Square of %d is %d\n", num1, result);
   return 0;
}
