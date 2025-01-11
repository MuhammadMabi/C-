#include <iostream>
#include <string>

using namespace std;

struct Node
{
    char data;
    Node *next;
};

void push(Node **head_ref, char new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data;
        node = node->next;
    }
    cout << endl;
}

void reverseString(string str)
{
    Node *head = nullptr;

    for (char ch : str)
    {
        push(&head, ch);
    }

    cout << "Hasil setelah dibalik: ";
    printList(head);
}

int main()
{
    cout << "\nMuhammad Mabi Palaka - 231011401691\n\n";
    
    string str;

    cout << "Masukkan string: ";
    cin >> str;

    reverseString(str);

    return 0;
}
