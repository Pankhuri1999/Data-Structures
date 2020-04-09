#include<iostream>
using namespace std;
struct Node
{
    int data;
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
int insPos (int d, int pos)
{
    Node *nn = new Node() ;
    nn->data =  d ;
    Node *temp = new Node() ;
    temp = head ;
    int  i = 0 ;
    while (i>pos)
    {
        temp = temp->next ;
        i++ ;
    }
    nn->next = temp ;
    temp->next = nn ;
}
int disp()
{
    Node *temp = new Node();
    temp = head ;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-> " ;
        temp = temp->next ;
    }
}

int main()
{
    insEnd(4);
    insBeg(5);
    insBeg(7);
    insEnd(8);
    insPos(3,2);
    insPos(10,4);
    disp() ;
}
