#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL ;
int main()
{
    Node *first = new Node() ;
    first->data = 6  ;
    first->next = NULL ;
    head = first ;
    cout<<"Data for first node is: "<<first->data ;
}
