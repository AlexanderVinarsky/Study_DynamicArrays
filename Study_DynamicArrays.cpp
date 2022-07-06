#include <iostream>

int main()
{
    int* mas = NULL;
    int size;
    do
    {
            printf("Input size of array (between 1 and 10000): ");
            scanf_s("%d", &size);
    } while (size < 1 || size > 10000);

    mas = (int*)malloc(sizeof(int) * size);
    if (mas == NULL)
    {
        printf("Program couldn't allocate array!\n");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        mas[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", mas[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
