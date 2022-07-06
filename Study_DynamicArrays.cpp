#include <iostream>
#include "Functions.h"

int main()
{
    int size = 0;
    int* mas = createArray(size);

    fillArray(mas, size);
    printf("Array: ");
    printArray(mas, size);
    printf("\n");
    printf("Input new size: ");

    int new_size;
    scanf_s("%d", &new_size);
    changeArraySize(&mas, size, new_size);
    printf("New array: ");
    printArray(mas, size);
    printf("\n");

    free(mas);
    system("pause");
    return 0;
}
