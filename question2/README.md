Fibonacci Sequence Implementation
---------------------------------

Development Environment:
- Programming Language: C
- Compiler: GCC (GNU Compiler Collection)
- Operating System: [MacOS]

How to Compile:
1. Open a terminal/command prompt.
2. Navigate to the directory containing the source code file.
3. Run the following command to compile the code:
```
$ gcc recurrence.c -o recurrence
```
This command compiles the source code file `fibonacci.c` and generates an executable file named `fibonacci`.

How to Run:
1. After successful compilation, run the following command to execute the program:
```
$ ./recurrence
```
This command runs the compiled program and produces the output.

Output:
The program will output the results of the arithmetic operations and the Fibonacci sequence as follows:
```
Recursive: F(10) = 46
Iterative: F(10) = 46
Memoization: F(10) = 46
```

Explanation:
- The program provides three different implementations of the Fibonacci sequence calculation.
- The recursive implementation uses a simple recursive function to calculate the Fibonacci number, following the given recurrence relation.
- The iterative implementation uses a loop to calculate the Fibonacci number iteratively, starting from the base cases and iteratively updating the previous two values.
- The memoization implementation uses an auxiliary array to store the previously calculated Fibonacci numbers, reducing redundant calculations and improving performance.
- In the `main` function, the value of `n` is set to 10 (you can modify it as per your requirement).
- The program calculates and prints the Fibonacci number using all three implementations.
- The results of all three implementations will be the same for the given recurrence relation.
- Please note that the program assumes the maximum value of `n` to be 100 for the memoization implementation. You can adjust the `memo` array size accordingly.



