#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
typedef Node *nodePtr;

void insert(nodePtr &head, int data);

int main()
{
    nodePtr head;
    head = new Node;
    head->data = 20;
    head->next = NULL;

    insert(head, 30);
    nodePtr tmp;
    tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }

    return 0;
}

void insert(nodePtr &head, int data)
{
    if (head == NULL)
    {
        nodePtr newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        nodePtr newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        head->next = newNode;
    }
    

}