#include <iostream>
#include "Functions.h"

int main()
{
	printf("Input matrix size: ");
	int rows, cols;
	scanf_s("%d%d", &rows, &cols);

	int** matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = (int*)malloc(cols * sizeof(int));
	}

	int counter = 1;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			matrix[i][j] = counter++;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			printf("%3d ", matrix[i][j]);
		printf("\n");
	}
	printf("\n\n\n");

	for (int i = 0; i < rows; i++)
		free(matrix[i]);
	free(matrix);

	system("pause");
	return 0;
}