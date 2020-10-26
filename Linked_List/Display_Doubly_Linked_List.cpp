#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL,*last=NULL;

void create(int A[],int n)
{
    first=new Node;
    first->prev=NULL;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        struct Node *t;
        t=new Node;
        t->prev=last;
        t->data=A[i];
        t->next=NULL;

        last->next=t;
        last=t;
        last->prev=t->prev;
    }
}

void display(struct Node *p)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        q=p;
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
    while(q!=NULL)
    {
        cout<<q->data<<" ";
        q=q->prev;
    }
    cout<<"\n";

}
int main()
{
    int A[]={1,3,5,6,7};

    create(A,sizeof(A)/sizeof(A[0]));

    display(first);
}
