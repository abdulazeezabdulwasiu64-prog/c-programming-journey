#include <stdio.h>
int main() { 

 // TEST-1 Running Total 
 // Ask user for a number, print running sum from 1 to that number.

 printf("Running Total\n");

 int user;

 printf("Enter number: ");
 scanf("%d", &user);

 int a = 1;
 int sum = 0;
 while (a <= user) { 
   sum = sum + a;
  printf("Running sum = %d\n", sum);
  a ++;
 }

 // TEST-2 Reverse Multiplication Table
 // Ask user for a number and print.

 printf("\nReverse Multiplication Table\n");

 int mul;
 printf("Enter number: ");
 scanf("%d", &mul);

 int b = 10;
 while (b >= 1) { 
 int cal = mul * b;
 printf("%d X %d = %d\n", mul, b, cal);
 b --;
 }

 // TEST-3 password + 4-digit validation together
 /* Program should:
 1. ask for 4-digit password
 2. reject invalid digit length
 3. keep asking until:
    number is 4 digit 
    AND password equals 4321 */

 printf("\npassword + 4-digit validation together\n");
 int password; 

 printf("Enter Any 4-digit number: ");
 scanf("%d", &password);

// my code before  while (password < 1000 || password > 9999 && password != 4321)

 while (password < 1000 || password > 9999 || password != 4321) { 

 if(password < 1000 || password > 9999){
   printf("Input: must be 4-digit number\n");
 } else { 
   printf("Invalid password\n");
 }
 printf("Enter Any 4-digit number again: ");
 scanf("%d", &password);
 }
 
 printf("Valid 4-digit number\n");

 //TEST-4 Sum only EVEN numbers
 //Add ONLY even numbers from 1 to 20

 printf("\nSum only EVEN numbers\n");
 int even = 0;
 int c = 2;
 while (c <= 20) { 
 even = even + c;

 c +=2;
 }

 printf("Sum = %d\n", even);

 //TEST-5 Number Guessing
 // Correct number: 7
 // keep asking until user guesses correctly.

 printf("\nNumber Guessing\n");
 int guess;
 printf("Enter guess: ");
 scanf("%d", &guess);

 while (guess != 7) { 
 printf("Wrong\n");

 printf("Enter guess again: ");
 scanf("%d", &guess);
 }

 printf("Correct\n");

 //TEST-6 Countdown Timer
 printf("\nCountdown Timer\n");
 int count = 10;
 while (count >= 1) { 
 printf("%d\n", count);
 count --;
 }

 printf("Blast off!\n");

 //TEST-7 (Harder)
 // Ask user for a number
 // print multiplication table AND running sum together 
 printf("\nHarder\n");
 int num;
 printf("Enter number: ");
 scanf("%d", &num);

 int d = 1;
 while (d <= 10) { 
 printf("%d X %d = %d\n", num, d, num * d);
 printf("Running sum = %d\n", num * d);

 d ++;
 }
 return 0;
} 
