#include <stdio.h>

int main() {
 int a = 20;
 int b = 6;
 printf("Addition: %d\n", a + b);
 printf("Subtraction: %d\n", a - b);
 printf("Multiplication: %d\n", a * b);
 printf("Divison: %d\n", a / b);
 printf("Remainder: %d\n", a % b);
 printf("%d\n", a > b);
 printf("%d\n", a < b);
 printf("%d\n", a == b);
 printf("%d\n", a != b);
 printf("%d\n", a >= b);
 printf("%d\n", a <= b);
 printf("%d\n", a > 10 && b > 10);
 printf("%d\n", a < 10 || b < 10);
 printf("%d\n", !(a == b));

 int age;
 printf("Enter your age: ");
 scanf("%d", &age);

 printf("is adult: %d\n", age >= 18);
 return 0;
}
