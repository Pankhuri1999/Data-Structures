#include<iostream>
using namespace std;
struct Node
{
    int data ;
    Node *next ;
};
Node *head = NULL ;
int insBeg(int d)
{
    Node *nn = new Node() ;
    nn->data = d ;
    nn->next = head ;
    head = nn ;
}
int insEnd(int d)
{
    Node *nn = new Node();
    nn->data = d;
    nn->next = NULL ;
    if (head == NULL)
    {
        head = nn ;
    }
    else
   {
    Node *temp = new Node() ;
    temp = head ;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = nn ;
   }
}
int mid()
{
    if (head == NULL)
    {
        cout<<"List is empty"<<endl ;
    }
    else
    {
    Node *fast = new Node() ;
    Node  *slow = new Node() ;
    fast =  head ;
    slow = head ;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next ;
        fast = fast->next->next ;
        //fast = fast->next ;
    }
    cout<<"Middle element: "<<slow->data<<endl ;
    }
}
int disp()
{
    Node *temp = new Node() ;
    temp =  head ;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> " ;
        temp = temp->next ;
    }
}
int main()
{
    insBeg(6);
    insBeg(7);
    insBeg(2);
    insBeg(0);
    insBeg(1);
    insEnd(4);
    insEnd(3);
    insEnd(8);
    insEnd(9);
    insEnd(11);
    disp();
    cout<<endl;
    cout<<endl;
    mid() ;
}
