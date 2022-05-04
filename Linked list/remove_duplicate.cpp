#include<bits/stdtr1c++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert(Node *head,int n)
{   
    for(int i=0;i<n;i++)
    { 
        int data;
        cin>>data;
        Node *temp=head;
    if(head==NULL)
    {   
        head=temp=new Node(data);
    }
        else{
            temp->next=new Node(data);
            temp=temp->next;
        }
    }
}

Node *remove_duplicates(Node *head)
{
    Node *temp=head;
    if(head==NULL || head->next==NULL)
      return head;
      while(temp!=NULL && temp->next!=NULL)
      {
          if(temp->data==temp->next->data)
          {
              temp->next=temp->next->next;
          }
          else 
          temp=temp->next;
      }
      return head;
}

int main()
{
    int n;
    cout<<"Enter size of linked list:";
    cin>>n;
    Node*head=NULL;
    cout<<"Enter elements: ";
    insert(head,n);
    display(head);
    remove_duplicates(head);
    display(head);
}