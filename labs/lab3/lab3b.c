#include <stdio.h>

#define MAX_SIZE 100

void exit(int bs);

int power(int base, int power)
{
    int i = 0;
    int result = 1;
    for (i = 0; i < power; i++)
    {
        result *= base;
    }
    return result;
}

int isOctal(char c)
{
    if (c >= 48 && c <= 55)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    // intiliazing variables
    char my_strg[MAX_SIZE]; /* to store an octal number in the form of an array of char */
    int my_int = 0;
    int c;
    int counter = 0;
    int isNegative = 0;

    // input and simultaneously checking if it is octal and appending to the array
    c = getchar();
    while (c != EOF && c != '\n')
    {
        if (isOctal(c))
        {
            my_strg[counter] = c - 48;
            printf("%d \n", c);
            counter++;
        }
        else if (c == '-')
        {
            isNegative = 1;
        }
        else
        {
            my_int = -1;
            break;
        }
        c = getchar();
    }

    //print if error
    if (my_int == -1)
    {
        printf("error\n");
        exit(0);
    }

    //reverse the array
    int start = 0;
    int end = counter - 1;
    char temp;
    while (start <= end)
    {
        temp = my_strg[end];
        my_strg[end] = my_strg[start];
        my_strg[start] = temp;
        start++;
        end--;
    }

    //do the octal shit
    int i;
    for (i = 0; i < counter; i++)
    {
        my_int += power(8, i) * my_strg[i];
    }

    //output the decimal integer
    if (isNegative)
    {
        printf("-%d\n", my_int);
    }
    else
    {
        printf("%d\n", my_int);
    }
}