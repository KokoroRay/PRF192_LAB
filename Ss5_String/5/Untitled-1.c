#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    int work =0;
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        if (isalnum(input[i]) && !isdigit(input[i])) {
            if(input[i - 1] == NULL || input[i -1] == ' '){
                work++;
            }
        }
    }
    printf("There are %d words in the sentence\n", work);
    return 0;
}
