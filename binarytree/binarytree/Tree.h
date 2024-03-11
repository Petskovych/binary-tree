 

#ifndef TREE_H
#define TREE_H

#include <iostream>

 
typedef int datatype;  

 
struct Node {
    datatype data;
    Node* left;
    Node* right;
};

// ���������� ������� �������� Tree
Node* CreateTree();
void ShowTree(Node* root);
void PrefixOrder(Node* root);
void PostfixOrder(Node* root);
void InfixOrder(Node* root);

#endif

