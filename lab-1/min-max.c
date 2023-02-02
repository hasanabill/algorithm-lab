#include <stdio.h>

int main()
{

    int arr[7] = {10, 40, 42, 57, 3, 6, 7};
    int i, min = arr[0], max = arr[0];

    for (i = 0; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum: %d\n Maximum: %d\n", min, max);

    return 0;
}