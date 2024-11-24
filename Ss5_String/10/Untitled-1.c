#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input);
    int j =0;
    for (int i = 0; i < len; i++) {
        while (isspace(input[i+1]) && isspace(input[i])) {
            for (int j = i; j < len; j++) {
                input[j] = input[j+1];
            }
            len--;
        }
    }

    while (isspace(input[len-1])) {
        input[len-1] = '\0';
        len--;
    }


    printf("%s", input);
    return 0;
}
