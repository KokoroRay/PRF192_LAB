#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
  int n;
  double sum = 0;

  printf("Please enter positive integer N: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Accept positive number only!\n");
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    sum += (pow(-1, i) / i);
  }

  printf("The sum is %.6f\n", sum);

  return 0;
}