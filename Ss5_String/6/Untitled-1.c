#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    char input[1024];
    fgets(input, 1024, stdin);
    input[strlen(input) - 1] = '\0';
    strlwr(input);
    printf("%s", input);




    return 0;
}
