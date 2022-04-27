#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct Person
{
    char name[MAX];
    char age[MAX];
    char birthdate[MAX];
    char course[MAX];
    char address[MAX];
} Person;

void write_input(Person *ptr)
{
    printf("Name: ");
    fgets(ptr->name, MAX, stdin);

    printf("Age: ");
    fgets(ptr->age, MAX, stdin);

    printf("Birthdate: ");
    fgets(ptr->birthdate, MAX, stdin);

    printf("Course: ");
    fgets(ptr->course, MAX, stdin);

    printf("Address: ");
    fgets(ptr->address, MAX, stdin);
    printf("\n");
}

int main()
{
    FILE *in;
    FILE *out;
    Person p1;
    Person p2;
    Person *ptr = &p1;

    write_input(ptr);

    //-- Write to BINARY FILE --
    out = fopen("personal_info.bin", "wb");
    if (out == NULL)
    {
        printf("File to be written does not exist.");
        return 1;
    }

    size_t elements_written = fwrite(&p1, sizeof(Person), 1, out);
    fclose(out);
    if (elements_written == 0)
    {
        printf("There has been an error writing the file.");
        return 2;
    }

    //-- Read to BINARY FILE --
    in = fopen("personal_info.bin", "rb");
    if (in == NULL)
    {
        printf("File to be read does not exist.");
        return 3;
    }

    size_t elements_read = fread(&p2, sizeof(Person), 1, in);
    fclose(in);
    if (elements_read == 0)
    {
        printf("There has been an error reading the file.");
        return 4;
    }

    printf("Contents:\n");
    printf("Name: %s", p2.name);
    printf("Age: %s", p2.age);
    printf("Birthdate: %s", p2.birthdate);
    printf("Course: %s", p2.course);
    printf("Address: %s\n", p2.address);

    return 0;
}
