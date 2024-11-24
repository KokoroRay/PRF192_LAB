#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[100];
    printf("Please enter a sentence:");
    fgets(input, 100, stdin);
    int len = strlen(input);
    int upCase =0, upCase2 =0, upCase3 =0;

    for (int i = 0; i < len; i++) {
        if (isupper(input[i]) != 0) {
            upCase++;
        }
        else if (islower(input[i]) != 0) {
            upCase2++;
        }
        else if (isdigit(input[i]) != 0) {
            upCase3++;
        }
    }
    printf("The number of uppercase alphanumeric is %d\n", upCase);
    printf("The number of lowercase alphanumeric is %d\n", upCase2);
    printf("The number of digits is %d", upCase3);
    return 0;
}
