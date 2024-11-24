#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int octal(int n) {
	int is_octal = 1;
  	while (n > 0) {
   		int digit = n % 10;
  	 	if (digit < 0 || digit > 7) {
  		    is_octal = 0;
      break;
    }
    n /= 10;
  }
  return is_octal;
}

int main(int argc, char *argv[]) {
	int n, a, b, d, t = 0, i = 0;
	char str[1000];
	printf("Please an integer number: ");
	scanf("%d", &n);
	printf("Please enter the base A of your number: ");
	scanf("%d", &a);
	if (a == 2 || a == 8 || a == 10) {
		printf("Please enter the base B of your number: ");
		scanf("%d", &b);
		if (b == 2 || b == 8 || b == 10 || b == 16){
			if (a == b) {
			printf("a and b cannot be the same");
		}
		else {
			if (a == 2) {
				if (a < 2 || a > -1) {
					while (n > 0) {
						t += (n % 10 ) * pow(2, i);
						n /= 10;
						i++;
					printf("%d is not a binary!");
				}
			}
			else if (a == 8 ){
				
				if (octal(n) == 0) {
					printf("%d is not octal number!");
				}
				else {
					while (n > 0) {
						t += (n % 10) * (8, i);
						n /= 10;
						i++;
					}
					
				}
			}
			else if (a == 10){
				t = n;
			}
			if (b == 2 || b == 8 || b == 10 || b == 16){
				itoa(t, str, b);
				printf("Conversion results: %d = %s", n, str);
				}
		
			}
		}	
		else 
			printf("The base B must be 2 or 8 or 10 or 16");
		
	}
	
	else{
		printf("The base A must be 2 or 8 or 10!");
	}
	return 0;
}