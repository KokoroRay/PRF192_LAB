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
    int t = 0;
    char find, replace;
    scanf("%c", &find);
    scanf("%c", &replace);

    for (int i = 0; i < len; i++){
        if (input[i] == find) {
            t = 1;
        }
    }
    if (t != 1) {
        printf("The character '%c' was not found in the entered sentence", find);
    }
    else {
        for (int i = 0; i < len; i++) {
            while(input[i] == find) {
                for (int j = i; j < len; j++) {
                    input[j] = replace;
                }
                len--;
            }
        }
    printf("%s", input);
    }
    return 0;
}
