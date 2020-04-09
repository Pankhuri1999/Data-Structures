#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next ;
};
Node *head = NULL ;
int delBeg()
{
    if (head == NULL)
    {
        cout<<"Linked list is empty" ;
    }
    else
    {
        Node *nn = new Node() ;
        nn = head ;
        head = head->next ;
        free(nn) ;
    }
}
int delEnd()
{
    if (head == NULL)
    {
        cout<<"Linked list is empty" ;
    }
    else if (head->next==NULL)
    {
        Node *temp = head ;
        head = NULL ;
        free(temp) ;
    }
    else
    {
        Node *temp = new Node() , *prev = new Node() ;
        prev = temp = head ;
        while(temp->next!=NULL)
        {
            prev = temp ;
            temp = temp->next ;
        }
        prev->next = NULL ;
        //free(prev) ;
        free(temp) ;
    }
}
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
    disp();
    cout<<endl;
    cout<<endl;
    delBeg() ;
    disp();
    cout<<endl;
    delEnd() ;
    disp();
    cout<<endl;
    delBeg() ;
    disp();
    cout<<endl;
    delEnd() ;
    disp();
    cout<<endl;
}

