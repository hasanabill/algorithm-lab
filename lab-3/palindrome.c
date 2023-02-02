#include <stdio.h>
int main()
{
    int n, revNum = 0, rem, ogNum;
    scanf("%d", &n);
    ogNum = n;

    for (n; n != 0; n /= 10)
    {
        rem = n % 10;
        revNum = revNum * 10 + rem;
    }

    if (ogNum == revNum)
        printf("palindrome.");
    else
        printf("not palindrome.");

    return 0;
}