//
//  main.c
//  binary_tree
//
//  Created by Duan Huikai on 05/04/2024.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct BTree {
    int value;
    struct BTree *left, *right;
} BTree;

void printInOrder(BTree *root) {
    if (root != NULL) {
        printInOrder(root->left);
        printf("%d ", root->value);
        printInOrder(root->right);
    }
}

void destroyTree(BTree *root) {
    if (root != NULL) {
        destroyTree(root->left);
        destroyTree(root->right);
        free(root);
    }
}

int countNodes(BTree *root) {
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int sumValues(BTree *root) {
    if (root == NULL)
        return 0;
    return root->value + sumValues(root->left) + sumValues(root->right);
}

BTree* search(BTree *root, int value) {
    if (root == NULL || root->value == value)
        return root;
    if (value < root->value)
        return search(root->left, value);
    return search(root->right, value);
}
BTree *insert(BTree *root, int value) {
    if (root == NULL) {
        BTree *new_node = (BTree*) malloc(sizeof(BTree));
        new_node->value = value;
        new_node->left = new_node->right = NULL;
        return new_node;
    }
    if (value < root->value) {
        root->left = insert(root->left, value);
    }
    else if (value > root->value) {
        root->right = insert(root->right, value);
    }
    else {
        printf("already in the tree");
    }
    return root;
}


void negateValues(BTree *root) {
    if (root != NULL) {
        root->value *= -1;
        negateValues(root->left);
        negateValues(root->right);
    }
}

int main(int argc, const char * argv[]) {
    int sample[] = {15, 96, 34, 12, 14, 56, 21, 11, 10, 9, 78, 43, 0};
    BTree *root = NULL;
    int i;
    for (i = 0; sample[i] > 0; i++)
        root = insert(root, sample[i]);

    printf("Inorder traversal: ");
    printInOrder(root);
    printf("\n");
    destroyTree(root);

    return 0;
}
