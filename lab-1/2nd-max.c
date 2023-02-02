#include <stdio.h>

int main()
{
    int arr[7] = {10, 40, 42, 57, 45, 6, 7};
    int i, max2nd = 0, max = 0, min = arr[0];

    for (i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (i = 0; i < 7; i++)
    {

        if (arr[i] < max && arr[i] > min)
        {
            max2nd = arr[i];
        }
    }

    printf("2nd highest: %d", max2nd);

    return 0;
}