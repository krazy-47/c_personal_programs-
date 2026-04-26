#include <stdio.h>
int main() {
   int number1, number2, z;
   printf("simple calculator enter 1 number to sum up: ");
  scanf("%d", &number1);
  printf("please enter the second number: ");
  scanf("%d", &number2);
  z = number1 + number2;
  printf("%d\n", z);

   return 0;
}  