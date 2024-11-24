#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum;
	printf("Please enter positive integer N: ");
	for (int n = 6; n <= 1000; n++) {
    int sum = 1;

    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
        sum += i;
      }
    }

    if (sum == n) {
      printf(" %d", n);
    }
  }
	return 0;
}