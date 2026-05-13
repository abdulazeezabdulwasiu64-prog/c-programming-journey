#include <stdio.h>

int main() {

 //Ternary Operation 
 int a = 10;
 int b = 20;

 int max = (a > b) ? a : b;
 printf("Maximum = %d\n", max);

 //I want to ask user for age and use ternary 
 int age;

 printf("Enter your age: ");
 scanf("%d", &age);

 (age >= 18)
 ? printf("Eligible\n")
 : printf("Not Eligible\n");

 //check even or odd number
 int num;

 printf("Enter a Number: ");
 scanf("%d", &num);

 (num % 2 == 0)
 ? printf("Even Number\n")
 : printf("Odd Number\n");

 return 0;
}
