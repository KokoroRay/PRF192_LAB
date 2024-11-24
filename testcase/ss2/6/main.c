#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a, b, c, amStrong;
	printf("All strong number are: ");
	for (int i = 100; i <= 999; i++){
		a = (i %1000) / 100;
		b = (i %100) / 10;
		c = i % 10;
		amStrong = pow(a, 3) + pow(b, 3) + pow(c, 3);
		if (amStrong == i)
			printf("%d ", i);

	}
	return 0;
}
