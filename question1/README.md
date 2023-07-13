Fibonacci Sequence using Dynamic Programming
--------------------------------------------

Development Environment:
- Programming Language: C
- Compiler: GCC (GNU Compiler Collection)
- Operating System: [MacOS]

How to Compile:
1. Open a terminal/command prompt.
2. Navigate to the directory containing the source code file.
3. Run the following command to compile the code:

```
$ gcc fibonacci.c -o fibonacci
```
This command compiles the source code file `fibonacci.c` and generates an executable file named `fibonacci`.

How to Run:
1. After successful compilation, run the following command to execute the program:
```
$ ./fibonacci
```
This command runs the compiled program and produces the output.

Output:
The program will output the results of the arithmetic operations and the Fibonacci sequence as follows:
```
add : 16
mul : 20
sub : -4
fibo : 2
```


Explanation:
- The program defines a `Node` structure to represent arithmetic operations and values.
- The `createNode` function is used to create a new Node with the specified type, value, left child, and right child.
- The `evaluateNode` function recursively evaluates a Node and returns its value.
- The `fibonacci` function calculates the Fibonacci number using dynamic programming and returns the result.
- In the `main` function, the function nodes for addition, multiplication, subtraction, and the Fibonacci sequence are created.
- The `printResult` function is used to print the results of evaluating the function nodes.
- Finally, the program prints the results by evaluating the function nodes and frees the allocated memory.




