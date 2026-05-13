/*#include <stdio.h>

int main() {
  
  int y = 10;
  int x = 3;

  printf("Addition: %d\n", y + x);
  printf("Subtraction: %d\n", y - x);
  printf("Multiplication: %d\n", y * x);
  printf("Division: %d\n", y / x);
  printf("Remainder: %d\n", y % x);
  return 0;
}*/
#include <stdio.h>

int main() {
 int age = 25;
 printf("true: %d\n", age >= 20);
 printf("false: %d\n", age <= 20);
 printf("%d\n", age > 20 && age < 28);
 printf("%d\n", age > 20 || age < 20);
 printf("%d\n", !age >= 20);

 return 0;
}
