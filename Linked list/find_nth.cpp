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
node *find_nth(node *&head, int n)
{
    node *main, *ref;
    main = head;
    ref = head;
    if(head==NULL)
    {
        cout<<"Empty list";
    }
    while (n != 1)
    {
        ref = ref->next;
        n--;
    }
    while (ref->next != NULL)
    {
        ref = ref->next;
        main = main->next;
    }
    cout << "n'th node from last is :" << main->data;
}
int main()
{
    int n;
    node *head = NULL;
    create(head, 2);
    create(head, 4);
    create(head, 6);
    create(head, 8);
    create(head, 10);
    create(head, 12);
    cout << "\nGiven list:";
    display(head);
    cout <<"\nEnter value of n:";
    cin >> n;
    find_nth(head, n);
    return 0;
}