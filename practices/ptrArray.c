#include <stdio.h>

int main()
{
    int numArr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numArr2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    // array pointer is start address of array
    int *numPtr1 = numArr1;
    // 2d array pointer # type(*ptr)[row size] = array;
    int(*numPtr2)[4] = numArr2;
    printf("%d\n", numPtr1[0]);
    printf("%d\n", numPtr2[2][3]);
    printf("------\n");
    printf("arr: %d\n", sizeof(numArr2));
    printf("col: %d\n", sizeof(numArr2[0])/sizeof(int));
    printf("row: %d\n", sizeof(numArr2)/sizeof(numArr2[0]));
    printf("ptr: %d\n", sizeof(numPtr2));

    return 0;
}