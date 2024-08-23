#include <stdio.h>
int main()
{
int customerID, units;
char customerName[50];
float charge, totalAmount, surcharge = 0;
printf("Enter Customer ID: ");
scanf("%d", &customerID);
printf("Enter Customer Name: ");
scanf("%s", customerName);
printf("Enter Units Consumed: ");
scanf("%d", &units);
if (units <= 199)
charge = units * 1.20;
else if (units >= 200 && units < 400)
charge = units * 1.50;
else if (units >= 400 && units < 600)
charge = units * 1.80;
else
charge = units * 2.00;
if (charge > 400)
{
surcharge = charge * 0.15;
if (surcharge < 100)
surcharge = 100;
}
totalAmount = charge + surcharge;
printf("\nElectricity Bill\n");
printf("Customer ID: %d\n", customerID);
printf("Customer Name: %s\n", customerName);
printf("Units Consumed: %d\n", units);
printf("Charge: Rs. %.2f\n", charge);
printf("Surcharge: Rs. %.2f\n", surcharge);
printf("Total Amount: Rs. %.2f\n", totalAmount);
return 0;
}
