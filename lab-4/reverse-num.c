#include <stdio.h>

int main()
{
    int n, revNum = 0, rem;
    scanf("%d", &n);

    for (n; n != 0; n /= 10)
    {
        rem = n % 10;
        revNum = revNum * 10 + rem;
    }

    printf("Reverse: %d\n", revNum);

    return 0;
}