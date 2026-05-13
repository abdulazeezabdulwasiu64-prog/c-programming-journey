#include <stdio.h> 

int main() { 

  //calculator using switch first method :
  int num1, num2;
  char operator;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("choose your choice (+ - * /): ");
  scanf(" %c", &operator);
  printf("Enter second number: ");
  scanf("%d", &num2);

  switch (operator) {
     case '+':
        printf("Result = %d\n", num1 + num2);
        break;
     case '-':
        printf("Result = %d\n", num1 - num2);
        break;
     case '*':
        printf("Result = %d\n", num1 * num2);
        break;
     case '/':
        printf("Result = %d\n", num1 / num2);
        break;
    default:
       printf("Invalid operator\n");
  }

  //calculator using switch second method :
  int numb1, numb2, choice;

  printf("Enter first number: ");
  scanf("%d", &numb1);
  printf("Enter second number: ");
  scanf("%d", &numb2);

  printf("1. Add\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");

  printf("choose your choice: ");
  scanf("%d", &choice);

 switch (choice) {
     case 1:
        printf("Result = %d\n", numb1 + numb2);
        break;
     case 2:
        printf("Result = %d\n", numb1 - numb2);
        break;
     case 3:
        printf("Result = %d\n", numb1 * numb2);
        break;
     case 4:
        printf("Result = %d\n", numb1 / numb2);
        break;
    default:
       printf("Invalid choice\n");
  }

 //calculate in a line using if/else method :
  int number1, number2;
  char urChoice;

  printf("Enter number (example: 10 * 2): ");
  scanf("%d %c %d", &number1, &urChoice, &number2);


  if (urChoice == '+') {
   printf("Result = %d\n", number1 + number2);
  } else if (urChoice == '-') { 
   printf("Result = %d\n", number1 - number2);
  } else if (urChoice == '*') {
   printf("Result = %d\n", number1 * number2);
  } else if (urChoice == '/') { 
   printf("Result = %d\n", number1 / number2);
  } else { 
   printf("Invalid Number\n");
  }

 return 0;
}
