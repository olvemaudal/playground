#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char * greeting = "Hello, gitpod!";
    if (puts(greeting) == EOF)
        exit(EXIT_FAILURE);
    return EXIT_SUCCESS;
}
