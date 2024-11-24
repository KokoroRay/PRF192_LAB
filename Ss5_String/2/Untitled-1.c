#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    printf("Please enter a sentence: ");
    fgets(input, 1024, stdin);
    int len = strlen(input);
    int vowel = 0, consonant = 0;
    input[strlen(input) - 1] = '\0';

    for (int i = 0; i < len; i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' 
        || input[i] == 'o' || input[i] == 'u' || input[i] == 'y') {
            vowel++;
        }
        else if (input[i] != 'a' && input[i] != 'e' && input[i] != 'i' 
        && input[i] != 'o' && input[i] != 'u' && input[i] != 'y' 
        && input[i] != ' ' && !isdigit(input[i] )) {
            consonant++;
        }
    }
    printf("The number of vowel alphabets is %d\n", vowel);
    printf("The number of consonant alphabets is %d\n", consonant);


    return 0;
}
