#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int *ptr = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        ptr[i] = i;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    int row, col;
    scanf("%d %d", &row, &col);
    int **pptr = malloc(sizeof(int *) * row);
    for (int i = 0; i < row; i++)
    {
        pptr[i] = malloc(sizeof(int) * col);
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pptr[i][j] = i + j;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", pptr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        free(pptr[i]);
    }
    free(pptr);
    return 0;
}