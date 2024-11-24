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

    for (int i = 0; i < len; i++){
        if (isalnum(input[i]) && !isdigit(input[i])) {
            if (input[i - 1] == ' ' || input[i - 1] == NULL) {
                input[i] = toupper(input[i]);
            }
            else{
                input[i] = tolower(input[i]);
            }
        }
        else {
            input[i] = tolower(input[i]);
        }
    }
    printf("%s", input);


    return 0;
}
