#include "main.h"

int **multiplyMatrices(int **x, int **y, int n, int m) {
    // Write your code here
    int a[10][10], b[10][10], mult[10][10], n, m, r2, c2, x, y, k;


	r2 = m;
	c2 = n;

	for (x = 0; x < n; ++x)
	for (y = 0; y < m; ++y)
	
	for (x = 0; x < r2; ++x)
	for (y = 0; y < c2; ++y)
	
	for (x = 0; x < n; ++x)
	for (y = 0; y < c2; ++y)
	{
		mult[x][y] = 0;
	}
	for (x = 0; x < n; ++x)
	for (y = 0; y < c2; ++y)
	for (k = 0; k < m; ++k)
	{
		mult[x][y] += a[x][k] * b[k][y];
	}
	
	for (x = 0; x < n; ++x)
	for (y = 0; y < c2; ++y)
	{
		if (y == c2 - 1)
    return 0;
}
