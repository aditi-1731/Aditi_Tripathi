#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Structure of expression tree node
struct node {
    char data;
    struct node *left;
    struct node *right;
};

// Stack structure
struct stack {
    int top;
    struct node* arr[50];
};

// Create stack
struct stack* createStack() {
    struct stack* s = (struct stack*)malloc(sizeof(struct stack));
    s->top = -1;
    return s;
}

// Push operation
void push(struct stack* s, struct node* temp) {
    s->arr[++s->top] = temp;
}

// Pop operation
struct node* pop(struct stack* s) {
    return s->arr[s->top--];
}

// Create new tree node
struct node* createNode(char value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Check if operand
int isOperand(char ch) {
    return isalnum(ch);
}

// Construct expression tree from postfix expression
struct node* constructTree(char postfix[]) {
    struct stack* s = createStack();
    struct node *t, *t1, *t2;

    for (int i = 0; postfix[i] != '\0'; i++) {
        // If operand, push to stack
        if (isOperand(postfix[i])) {
            t = createNode(postfix[i]);
            push(s, t);
        }
        // If operator, pop two nodes
        else {
            t = createNode(postfix[i]);
            t1 = pop(s);
            t2 = pop(s);

            t->right = t1;
            t->left = t2;

            push(s, t);
        }
    }
    return pop(s);
}

// Inorder traversal
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}

// Preorder traversal
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%c ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%c ", root->data);
    }
}

int main() {
    char postfix[50];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    struct node* root = constructTree(postfix);

    printf("\nInorder traversal: ");
    inorder(root);

    printf("\nPreorder traversal: ");
    preorder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    return 0;
}
