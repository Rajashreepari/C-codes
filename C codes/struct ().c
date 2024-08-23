
#include<stdio.h>

// structure code ---
struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1  = {"BMW ;", "X5 ;", 1999};
  struct Car car2  = {"Ford ;", "Corolla;", 1969};
  struct Car car3  = {"Toyota ;", "Mustang  ;", 2011};
  printf("the car details");
  printf("(1):%s %s %d\n", car1.brand, car1.model, car1.year);
  printf( "(2):%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("(3):%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}
