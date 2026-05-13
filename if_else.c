#include <stdio.h>

int main() {
  
  int age;
  int score;

  printf("Enter your Age: ");
  scanf("%d", &age);

  printf("Enter your Score: ");
  scanf("%d", &score);

  // Age system
  if (age < 0 || age >= 120) {
  printf("Invalid Age\n");
  } else if (age >= 18) { 
  printf("You are eligible to vote\n");
  } else {
  printf("You are not eligible to vote\n");
  }

  // Score system
  if (score >= 70) {
  printf("Grade A\n");
  } else if (score >= 50) {
  printf("Grade B\n");
  } else {
  printf("Grade F\n");
  } 
  return 0;
}
