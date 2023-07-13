#include <stdio.h>

// Recursive implementation
int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fibonacciRecursive(n - 3) + fibonacciRecursive(n - 2);
}

// Iterative implementation
int fibonacciIterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int a = 0, b = 1, c = 2, result;
    for (int i = 3; i <= n; i++) {
        result = a + b;
        a = b;
        b = c;
        c = result;
    }
    return result;
}

// Memoization implementation
int fibonacciMemoization(int n, int* memo) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    if (memo[n] != -1)
        return memo[n];

    int result = fibonacciMemoization(n - 3, memo) + fibonacciMemoization(n - 2, memo);
    memo[n] = result;
    return result;
}

// Main function
int main() {
    int n = 10;

    // Recursive implementation
    int recursiveResult = fibonacciRecursive(n);
    printf("Recursive: F(%d) = %d\n", n, recursiveResult);

    // Iterative implementation
    int iterativeResult = fibonacciIterative(n);
    printf("Iterative: F(%d) = %d\n", n, iterativeResult);

    // Memoization implementation
    int memo[100]; // Assuming the maximum value of n is 100
    for (int i = 0; i < 100; i++)
        memo[i] = -1;
    int memoizationResult = fibonacciMemoization(n, memo);
    printf("Memoization: F(%d) = %d\n", n, memoizationResult);

    return 0;
}
