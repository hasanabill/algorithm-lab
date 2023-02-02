#include <stdio.h>

int main()
{
    int N = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int i, temp;
    for (i = 0; i < N / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[N - 1];
        arr[N - 1] = temp;
        N--;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}