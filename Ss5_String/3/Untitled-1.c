#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    char find;
    printf("Please enter a sentence: ");
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input), count = 0, err =0;
    scanf("%c", &find);
    if (isupper(find) || islower(find)) {
        for (int i = 0; i < len; i++) {
            input[i] = tolower(input[i]);
        }

        for (int i = 0; i < len; i++) {
            if (input[i] == find) {
                count++;
            }
        }

        if (count == 0) {
            printf("Character '%c' is not found in the entered sentence", find);
        }
        else {
            printf("The letter '%c' appears %d times in the entered sentence", find, count);
        }
    }
    else {
        printf("Character '%c' is not letter. Accept letter only", find);
    }
    return 0;
    
}
