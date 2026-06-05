#include <stdio.h>

int main() {
 
 /*int i = 1;
 while (i <= 5){ 

  printf("%d\n", i);

   //i = i + 1;
  i ++;
 }
int a = 10;
 while (a >= 1){ 

  printf("%d\n", a);

   //a = a - 1;
  a --;
 } 

 int num;
 int i = 1;

 printf("Enter a number: ");
 scanf("%d", &num);

 while (i <= 10) { 
  printf("%d x %d = %d\n", num, i, num * i);
  i ++;
 }*/

 // Basic Counting
 printf("Basic counting\n");
 int a = 1;

 while (a <= 5) { 
 printf("%d\n", a);
 a ++; 
 }

 // Reverse counting
 printf("\nReverse counting\n");
 int b = 10;

 while (b >= 1) { 
 printf("%d\n", b);
 b --;
 }

 // Even numbers
 printf("\nEven numbers\n");
 int c = 2;

 while (c <= 20) { 
 printf("%d\n", c);
 c +=2;
 }

 // Odd numbers
 printf("\nOdd numbers\n");
 int d = 1;

 while (d <= 15) { 
 printf("%d\n", d);
 d +=2;
 }

 // Multiplication table
 printf("\nMultiplication table\n");
 int num = 8;
 int e = 1;

 while (e <= 10) { 
 printf("%dx%d = %d\n", num, e, num * e);
 e ++;
 }

/* // Sum numbers
 printf("Sum numbers\n");
 int sum = 1;

 while (sum < 6) { 
 printf("%d + ", sum);
 sum ++;
 }

 // Password loop
 printf("\nPassword loop\n");
 int passWord;
 printf("Enter 4 digit number: ");
 scanf("%d", &passWord);

 while (passWord == 1234) { 
 printf("Access Granted\n");
 passWord ++;
 } */

 // Correction of Sum numbers & Password loop

 printf("\nSum numbers\n");
 int i = 1;
 int sum = 0;

 while (i <= 15) { 
  sum = sum + i;
  printf("sum = %d\n", sum);
  i ++;
 }

 printf("\nPassword loop\n");

 int password;
 printf("Enter password: ");
 scanf("%d", &password);

 while (password != 1234) { 
 printf("Wrong password\n");

 printf("Enter password again: ");
 scanf("%d", &password);

// printf("Access Granted\n");
 }
 printf("Access Granted\n");
 return 0;
}
