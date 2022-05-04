#include <iostream>
#include<stdlib.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void create(node *&head, int val)
{
    node *temp = head;
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "empty\n";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *reverse(node *&head)
{
    node *cur = head;
    node *prev = NULL;
    node *nextptr;
    if (head == NULL || head->next == NULL)
        return head;
    while (cur != NULL)
    {
        nextptr = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextptr;
    }

    return prev;
}
int main()
{
    node *head = NULL;
    create(head, 2);
    create(head, 4);
    create(head, 6);
    create(head, 8);
    create(head, 10);
    create(head, 12);
    cout << "\nOriginal list:";
    display(head);
    node *newhead = reverse(head);
    cout << "\nAfter reversing: ";
    display(newhead);
    return 0;
}