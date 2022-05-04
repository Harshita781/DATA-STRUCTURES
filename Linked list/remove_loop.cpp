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
node *remove_loop(node *head)
{
    node *fast=head;
    node *slow=head;
    while(fast!=NULL || fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
           return head;
    }
    while(slow->next!=head)
    {
        
        if(slow->next->next==head)
        {
            slow->next->next=NULL;
        }
        slow=slow->next;
    }
    return head;
}
int main()
{
    node *head = NULL;
    create(head, 1);
    create(head, 3);
    create(head, 4);
    
    cout << "\nOriginal list:";
    display(head);
    remove_loop(head);
    display(head);
    return 0;
}