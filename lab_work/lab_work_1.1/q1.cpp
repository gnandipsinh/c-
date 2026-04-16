<<<<<<< HEAD
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    gets(str);   

    ptr = str;  

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d", length);

    return 0;
=======
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    gets(str);   

    ptr = str;  

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d", length);

    return 0;
>>>>>>> 93ea32a37ee51989794f2dd25e9fa21f4d53d698
}