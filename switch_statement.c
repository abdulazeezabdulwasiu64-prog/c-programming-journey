#include <stdio.h>

int main() {
  int number;

  printf("Enter a number 1 to 7: ");
  scanf("%d", &number);

  switch(number) { 
    case 1:
      printf("Monday\n");
      break;
    case 2:
      printf("Tuesday\n");
      break;
    case 3:
      printf("Wednesday\n");
      break;
    case 4:
      printf("Thusday\n");
      break;
    case 5:
      printf("Friday\n");
      break;
    case 6:
      printf("Saturday\n");
      break;
    case 7:
      printf("Sunday\n");
      break;
    default:
      printf("Invalid number\n");
  }

   // calculator

   int num1;
   int num2;
   char operator;

   printf("Enter a number: ");
   scanf("%d", &num1);

   printf("Your choice ['+' '-' '*' '/']: ");
   scanf(" %c", &operator);

   printf("Enter a number: ");
   scanf("%d", &num2);

   switch (operator) {
    case '+':
      printf("result = %d\n", num1 + num2);
      break;
    case '-': 
      printf("result = %d\n", num1 - num2);
      break;
    case '*': 
      printf("result = %d\n", num1 * num2);
      break;
    case '/': 
      printf("result = %d\n", num1 / num2);
      break;
    default: 
      printf("Invalid Number\n");
}
  return 0;
}
