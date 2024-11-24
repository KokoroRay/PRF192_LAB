#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    char find;
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input);
    scanf("%c", &find);
    int true1 =0;

    for (int i = 0; i < len; i++) {
        if (find == input[i]) {
            true1 = 1;
        }   
    }
    if (true1 != 1) {
        printf(" The character '%c' was not found in the entered sentence", find);
    }
    else {
        for (int i = 0; i < len; i++) {
            while(find == input[i]) {
                for (int j = i; j < len; j++) {
                    input[j] = input[j + 1];
                }
                len--;
            }
        }
    }
    printf("%s", input);
    return 0;
}
