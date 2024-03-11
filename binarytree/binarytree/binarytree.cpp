#include <iostream>
#include "Tree.h"
using namespace std;
void displayMenu() {
     cout << "\nMenu:\n";
     cout << "1.Create Tree\n";
     cout << "2.Show Tree\n";
    cout << "3.Prefix Order Traversal\n";
    cout << "4.Postfix Order Traversal\n";
    cout << "5.Infix Order Traversal\n";
    cout << "6.Exit\n";
    cout << "Enter your number: ";
}

int main() {
    Node* root = nullptr; // Початкове значення для кореня дерева

    int choice;
    do {
        displayMenu();
        cin >> choice;
       
        switch (choice) {
        case 1:
            root = CreateTree();
            break;
        case 2:
            cout << "Tree: ";
            ShowTree(root);
            cout << std::endl;
            break;
        case 3:
            cout << "Prefix Order Traversal: ";
            PrefixOrder(root);
            cout << std::endl;
            break;
        case 4:
            cout << "Postfix Order Traversal: ";
            PostfixOrder(root);
            cout << std::endl;
            break;
        case 5:
            cout << "Infix Order Traversal: ";
            InfixOrder(root);
            cout << std::endl;
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 6.\n";
        }
    } while (choice != 6);

    return 0;
}
