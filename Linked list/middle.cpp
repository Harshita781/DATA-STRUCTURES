#include <iostream>
#include <stdlib.h>
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
void create(node **head, int val)
{
    node *temp = *head;
    node *newnode = new node(val);

    if (*head == NULL)
    {
        *head = newnode;
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
int find_mid(node *head)
{
    node *slow = head, *fast = head;
    if (head == NULL)
        return -1;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main()
{
    int ele;
    node *head = NULL;
    create(&head, 1);
    create(&head, 2);
    create(&head, 3);
    create(&head, 4);
    create(&head, 5);
    create(&head, 6);
    cout << "\noriginal list:";
    display(head);
    cout << "\nmiddle of given linked list = " << find_mid(head);
}