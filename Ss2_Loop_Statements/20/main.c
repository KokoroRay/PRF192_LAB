#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_prime(int n) {
  if (n <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int a, b;
  printf("Enter the lower bound: ");
  scanf("%d", &a);
  printf("Enter the upper bound: ");
  scanf("%d", &b);

  if (a > b) {
    printf("Error: Lower bound must be less than or equal to upper bound.\n");
    return 1;
  } else if (a < 1) {
    printf("Error: Lower bound must be a positive integer.\n");
    return 1;
  }

  printf("The prime numbers from %d to %d are:\n", a, b);
  for (int i = a; i <= b; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}