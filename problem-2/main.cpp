#include "main.h"

int multiply(const int x[], const int y[], int n) {
    int result = 0;
    // Copy code from problem 3 of assignment 3 here
    return result;
}

int *multiply(int x[], int *y[], int n) {
    // Write your code here
    int a[1][10], b[10][10], mult[1][10], r1 = 1, n = 0, r2 = 0, c2 = 0, i, j, k;

	r2 = n;
	c2 = n;
	for (i = 0; i < r1; ++i)
	for (j = 0; j < n; ++j)
	
	for (i = 0; i < r2; ++i)
	for (j = 0; j < c2; ++j)
	
	for (i = 0; i < r1; ++i)
	for (j = 0; j < c2; ++j)
	{
		mult[i][j] = 0;
	}
	for (i = 0; i < r1; ++i)
	for (j = 0; j < c2; ++j)
	for (k = 0; k < n; ++k)
	{
		mult[i][j] += a[i][k] * b[k][j];
	}
	for (i = 0; i < r1; ++i)
	for (j = 0; j < c2; ++j)
	{
		if (j == c2 - 1)
	}
    return 0;
}
