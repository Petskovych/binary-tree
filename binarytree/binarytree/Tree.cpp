#include "Tree.h"
#include <queue>

Node* CreateTree() {
    std::cout << "Enter the value for the root node: ";
    datatype rootValue;
    std::cin >> rootValue;

    Node* root = new Node;
    root->data = rootValue;
    root->left = nullptr;
    root->right = nullptr;

    std::queue<Node*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        Node* current = nodeQueue.front();
        nodeQueue.pop();

        std::cout << "Enter the left child value for node with data " << current->data << " (or -1 if none): ";
        datatype leftValue;
        std::cin >> leftValue;
        if (leftValue != -1) {
            Node* leftChild = new Node;
            leftChild->data = leftValue;
            leftChild->left = nullptr;
            leftChild->right = nullptr;
            current->left = leftChild;
            nodeQueue.push(leftChild);
        }

        std::cout << "Enter the right child value for node with data " << current->data << " (or -1 if none): ";
        datatype rightValue;
        std::cin >> rightValue;
        if (rightValue != -1) {
            Node* rightChild = new Node;
            rightChild->data = rightValue;
            rightChild->left = nullptr;
            rightChild->right = nullptr;
            current->right = rightChild;
            nodeQueue.push(rightChild);
        }
    }

    return root;
}


void ShowTree(Node* root) {
    if (root) {
        // Рекурсивно виводимо ліве піддерево
        ShowTree(root->left);

        // Виводимо значення поточного вузла
        std::cout << root->data << " ";

        // Рекурсивно виводимо праве піддерево
        ShowTree(root->right);
    }
}

void PrefixOrder(Node* root) {
    if (root) {
        // Виводимо значення поточного вузла
        std::cout << root->data << " ";

        // Рекурсивно викликаємо функцію для лівого піддерева
        PrefixOrder(root->left);

        // Рекурсивно викликаємо функцію для правого піддерева
        PrefixOrder(root->right);
    }
}

void PostfixOrder(Node* root) {
    if (root) {
        // Рекурсивно викликаємо функцію для лівого піддерева
        PostfixOrder(root->left);

        // Рекурсивно викликаємо функцію для правого піддерева
        PostfixOrder(root->right);

        // Виводимо значення поточного вузла
        std::cout << root->data << " ";
    }
}

void InfixOrder(Node* root) {
    if (root) {
        // Рекурсивно викликаємо функцію для лівого піддерева
        InfixOrder(root->left);

        // Виводимо значення поточного вузла
        std::cout << root->data << " ";

        // Рекурсивно викликаємо функцію для правого піддерева
        InfixOrder(root->right);
    }
}
