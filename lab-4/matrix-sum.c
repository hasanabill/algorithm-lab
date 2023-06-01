#include <stdio.h>

int main()
{
    int size, i, j, sum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    int matrix[size][size];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    printf("Diagonal sum: %d\n", sum);

    return 0;
}
