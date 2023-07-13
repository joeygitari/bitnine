#include <stdio.h>
#include <stdlib.h>

typedef enum {
    ADD,
    SUB,
    MUL,
    DIV
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* makeFunc(TypeTag type) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->value = 0;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void calc(Node* node) {
    if (node->left == NULL || node->right == NULL)
        return;

    if (node->type == ADD) {
        node->value = node->left->value + node->right->value;
    } else if (node->type == SUB) {
        node->value = node->left->value - node->right->value;
    } else if (node->type == MUL) {
        node->value = node->left->value * node->right->value;
    } else if (node->type == DIV) {
        node->value = node->left->value / node->right->value;
    }
}

int fibonacci(int n) {
    if (n <= 1)
        return n;

    int* fib = (int*)malloc((n + 1) * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int result = fib[n];
    free(fib);
    return result;
}

int main() {
    Node* add = makeFunc(ADD);
    add->left = makeFunc(ADD);
    add->left->left = makeFunc(ADD);
    add->left->right = makeFunc(ADD);
    add->left->left->value = 10;
    add->left->right->value = 6;

    Node* mul = makeFunc(MUL);
    mul->left = makeFunc(MUL);
    mul->left->left = makeFunc(MUL);
    mul->left->right = makeFunc(MUL);
    mul->left->left->value = 5;
    mul->left->right->value = 4;

    Node* sub = makeFunc(SUB);
    sub->left = mul;
    sub->right = add;

    Node* fibo = makeFunc(SUB);
    fibo->left = sub;

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    printf("add : %d\n", add->value);
    printf("mul : %d\n", mul->value);
    printf("sub : %d\n", sub->value);
    printf("fibo : %d\n", fibo->value);

    free(add->left->left);
    free(add->left->right);
    free(add->left);
    free(add);
    free(mul->left->left);
    free(mul->left->right);
    free(mul->left);
    free(mul);
    free(sub);
    free(fibo);

    return 0;
}
