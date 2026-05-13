#include <stdio.h>

int main() {
  float number;
  char alphabet;

  printf("Enter input values: ");
  scanf("%f %c", &number, &alphabet);

  printf("Num: %f\n", number);
  printf("Character: %c\n", alphabet);

  return 0;
}
