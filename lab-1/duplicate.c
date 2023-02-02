#include <stdio.h>

int main()
{

    int arr[8] = {3, 6, 2, 4, 1, 6, 4, 5};

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[j]);
            }
        }
    }

    return 0;
}