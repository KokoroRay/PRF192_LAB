#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    char find, test =0;
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input);
    strlwr(input);
    scanf("%c", &find);
    if (!isalnum(find) && find != ' ') {
        printf("Character '%c' is not a letter. Accept letter only", find);
    }
    else {
        for (int i = 0; i < len; i++) {
            if (input[i] == find) {
                test = 1;
            }
        }
        if (test == 1) { 
            for (int i = 0; i < len; i++) {
                if (input[i] == find) {
                    printf("[%d]", i);
                }
            }
        }
        else {
            printf("Character '%c' was not found in the entered sentence", find);
        }
    }


    return 0;
}
