#include <stdio.h>

#define MAX 100

int main()
{
    FILE *in;
    char y[MAX];

    in = fopen("example.bin", "rb");
    if (in == NULL)
    {
        printf("No such file exists.");
        return 1;
    }

    size_t elements_read = fread(&y, sizeof(y), 1, in);
    fclose(in);
    if (elements_read == 0)
    {
        printf("There's an error in reading the file.");
        return 2;
    }

    printf("Content: %s", y);
    return 0;
}