#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int flag = 0;
    int len = strlen(str);

    for (int i = 0; i <= len / 2; i++)
    {
        if (str[i] == str[len - 1])
        {
            flag = 1;
        }
        len--;
    }
    if (flag == 0)
    {
        printf("Not Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }

    return 0;
}

/*
GCD
LCM
fibonacci
string
factorial
matrix
 */