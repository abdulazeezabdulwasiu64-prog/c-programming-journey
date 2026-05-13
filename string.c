#include <stdio.h>

int main() {

/*   char name[] = "Abdulazeez";
   printf("Hello %s\n", name);

   char naMe[20];
   printf("Enter your name: ");
   scanf("%s", naMe);

   printf("Hello %s\n", naMe); */ 

   char fullname[] = "Abdulazeez Abdulwasiu";
   printf("fullname %s\n", fullname);

   char fullName[40];
   printf("Enter your fullName: ");
   fgets(fullName, sizeof(fullName), stdin);

   printf("Hi %s", fullName);
 return 0;
}
