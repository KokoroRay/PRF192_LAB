#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        while(isdigit(input[i])) {
            for (int j = i; j < len; j++) {
                input[j] = input[j+1];
            }
            len--;
        }
    }
    printf("'%s", input);

    return 0;
}
