#include <iostream>

void fillArray(int* mas, int size)
{
    for (int i = 0; i < size; i++)
    {
        mas[i] = i + 1;
    }
}
int* allocateArray(int size)
{
    int *mas = (int*)malloc(sizeof(int) * size);
    if (mas == NULL)
    {
        printf("Program couldn't allocate array!\n");
        exit(1);
    }
    return mas;
}
int* createArray(int& size)
{
    do
    {
        printf("Input size of array (between 1 and 10000): ");
        scanf_s("%d", &size);
    } while (size < 1 || size > 10000);
    return allocateArray(size);
}
void printArray(int* mas, int size)
{
    for (int i = 0; i < size; i++)
    {
        mas[i] = i + 1;
        printf("%d ", mas[i]);
    }
    printf("\n");
}
void deleteHalf(int** mas, int& size)
{
    size /= 2;
    int* mas2 = allocateArray(size);
    for (int i = 0; i < size; i++)
    {
        mas2[i] = (*mas)[i];
    }
    free(*mas);
    *mas = mas2;
}
void changeArraySize(int** mas, int& size, int new_size)
{
    if (size == new_size) return;
    int* mas2 = allocateArray(new_size);
    if (new_size > size)
    {
        for (int i = 0; i < size; i++)
        {
            mas2[i] = (*mas)[i];
        }
        for (int i = size; i < new_size; i++)
        {
            mas2[i] = 0;
        }
    }
    else
    {
        for (int i = 0; i < new_size; i++)
            mas2[i] = (*mas)[i];
    }
    free(*mas);
    size = new_size;
    *mas = mas2;
}


int main()
{
    int size = 0;
    int* mas = createArray(size);

    fillArray(mas, size);
    printf("\n\n");
    printArray(mas, size);

    int new_size;
    scanf_s("%d, &new_size");
    changeArraySize(&mas, size, new_size);

    printf("\n\n");
    printArray(mas, size);

    free(mas);

    system("pause");
    return 0;
}
