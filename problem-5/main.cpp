#include "main.h"

long factorial(int n) {
    // Write your code here
    int i, n, factorial = 1;

	cout << "Enter a positive integer: ";
	cin >> n;

	for (i = 1; i <= n; ++i) {
		factorial *= i;  
    return 0;
}
