#include <iostream>
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
node *del(node *&head)
{
    node *temp1,*temp2,*temp3;
    temp3=head;
    temp1=temp3;
    while(temp1->next!=NULL)
    {   
       temp2=temp1->next;
        while(temp2!=NULL)
        {
            if((temp1->data)+(temp2->data)==0)
            {    
                 if(temp1->data==head->data)
                  {
                      head=temp1->next;
                      temp3=head;
                      delete temp1;
                  } 
                 if(temp1->next->data==temp2->data)     
                    { 
                     temp3=temp2->next;
                    }
                 temp3=temp1->next;
                 delete temp1;
                 delete temp2;
                 head=temp3;
            }
            temp2=temp2->next;
        }
        temp3=temp1;
        temp1=temp1->next;
    }
}
int main()
{
    node *head = NULL;
    create(head, 1);
    create(head, 2);
    create(head, -3);
    create(head, 3);
    create(head, -1);
    create(head, 5);
    cout << "\nOriginal list:";
    display(head);
    cout<<"\n";
    del(head);
    display(head);
    return 0;
}