#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char name;
    struct Node *left;
    struct Node *right;
} Node;

Node* create_node(char name) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->name = name;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void preorder(Node *root) {
    if (root != NULL) {
        printf("%c", root->name);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c", root->name);
        inorder(root->right);
    }
}

void postorder(Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%c", root->name);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    Node *nodes[26];
    for (int i = 0; i < 26; i++) {
        nodes[i] = NULL;
    }

    char root_name, left_name, right_name;
    for (int i = 0; i < N; i++) {
        scanf(" %c %c %c", &root_name, &left_name, &right_name);

        if (nodes[root_name - 'A'] == NULL) {
            nodes[root_name - 'A'] = create_node(root_name);
        }
        if (left_name != '.') {
            if (nodes[left_name - 'A'] == NULL) {
                nodes[left_name - 'A'] = create_node(left_name);
            }
            nodes[root_name - 'A']->left = nodes[left_name - 'A'];
        }
        if (right_name != '.') {
            if (nodes[right_name - 'A'] == NULL) {
                nodes[right_name - 'A'] = create_node(right_name);
            }
            nodes[root_name - 'A']->right = nodes[right_name - 'A'];
        }
    }

    // Preorder traversal
    preorder(nodes['A' - 'A']);
    printf("\n");

    // Inorder traversal
    inorder(nodes['A' - 'A']);
    printf("\n");

    // Postorder traversal
    postorder(nodes['A' - 'A']);
    printf("\n");

    return 0;
}
