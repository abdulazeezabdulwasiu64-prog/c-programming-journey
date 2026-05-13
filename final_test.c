#include <stdio.h>

int main() {


   printf("Welcome to My C program\n");
   int age;
   double height;
   char favoriteLetter;
   int year;

   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Enter your height: ");
   scanf("%lf", &height);
   printf("Your favorite letter: ");
   scanf(" %c", &favoriteLetter);
   printf("Enter your current year: ");
   scanf("%d", &year);

   printf("You are %d years old\n", age);
   printf("Your height is %.2lf\n", height);
   printf("Your favorite letter is %c\n", favoriteLetter);
   printf("Current year is %d\n", year);
   return 0;
}
