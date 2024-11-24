#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h, m, s, ts;
	printf("Please input the time with format hh:mm:ss ");
	scanf("%d:%d:%d", &h, &m, &s);
	if (h < 24 && h >= 0 &&
	m < 60 && m >= 0 &&
	s < 60 && s >= 0) {
		ts = (h*3600) + (m*60) + s;
		printf("The conversion value : %d = %ds");
	}
	else 
		printf("Some thing for hours, minutes and sconds is erorr!!!");
	
	return 0;
}