#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *bin = "000111111010";
    char *a = bin;
    int num = 0;
    do
    {
        int b = *a == '1' ? 1 : 0;
        num = (num << 1) | b;
        a++;
    } while (*a);
    printf("%X\n", num);

    return 0;
}