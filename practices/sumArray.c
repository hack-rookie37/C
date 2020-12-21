#include <stdio.h>

int main()
{
    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
    {
        sum += numArr[i];
    }
    printf("%d\n", sum);

    return 0;
}