#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void InsertNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

Node *intersectionPresent(Node *head1, Node *head2)
{
    Node *d1 = head1;
    Node *d2 = head2;

    while (d1 != d2)
    {
        d1 = d1 == NULL ? head2 : d1->next;
        d2 = d2 == NULL ? head1 : d2->next;
    }
    return d1;
}

int main()
{
    Node *head = NULL;
    InsertNode(head, 1);
    InsertNode(head, 3);
    InsertNode(head, 1);
    InsertNode(head, 2);
    InsertNode(head, 4);
    Node *head1 = head;
    head = head->next->next->next;
    Node *headSec = NULL;
    InsertNode(headSec, 3);
    Node *head2 = headSec;
    headSec->next = head;

    cout << "List 1:";
    printLL(head1);
    cout << "List 2:";
    printLL(head1);

    Node *answerNode = intersectionPresent(head1, head2);
    if (answerNode == NULL)
        cout << "No intersection\n";
    else
        cout << "The intersection point is " << answerNode->data << endl;

    return 0;
}