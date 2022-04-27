#include <stdio.h>

#define MAX 100

int main()
{
    char x[MAX] = "hello world!";
    FILE *out; // file handling

    // -- WRITE --
    out = fopen("example.bin", "wb");
    if (out == NULL)
    {
        printf("No such file exists.");
        return 1;
    }

    size_t elements_written = fwrite(&x, sizeof(x), 1, out);
    fclose(out);
    if (elements_written == 0)
    {
        printf("There's an error writing your file.");
        return 2;
    }

    return 0;
}