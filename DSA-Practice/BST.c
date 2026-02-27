#include <stdio.h>
#include <stdlib.h>

// Structure of BST node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Create a new node
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a node into BST
struct node* insert(struct node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Find minimum value node
struct node* findMin(struct node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Find maximum value node
struct node* findMax(struct node* root) {
    while (root->right != NULL)
        root = root->right;
    return root;
}

// Delete a node from BST
struct node* deleteNode(struct node* root, int value) {
    if (root == NULL)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        // Node with one or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        struct node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Inorder traversal (for verification)
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct node* root = NULL;
    int choice, value;

    while (1) {
        printf("\n\n--- BST Operations ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Find Minimum");
        printf("\n4. Find Maximum");
        printf("\n5. Inorder Traversal");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            root = insert(root, value);
            break;

        case 2:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            root = deleteNode(root, value);
            break;

        case 3:
            if (root != NULL)
                printf("Minimum value = %d", findMin(root)->data);
            else
                printf("Tree is empty");
            break;

        case 4:
            if (root != NULL)
                printf("Maximum value = %d", findMax(root)->data);
            else
                printf("Tree is empty");
            break;

        case 5:
            printf("Inorder traversal: ");
            inorder(root);
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid choice");
        }
    }
}
