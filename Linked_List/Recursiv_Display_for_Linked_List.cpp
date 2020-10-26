#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int pos,int n,struct Node *last)
{
    if(pos>=n)return;

    struct Node *t;
    t=new Node;
    t->data=A[pos];
    t->next=NULL;
    last->next=t;
    create(A,pos+1,n,t);
}

void display(struct Node *p)
{
    if(p==NULL)return;

    cout<<p->data<<" ";
    display(p->next);
}
int main()
{
    int A[]={3,5,7,10,15};
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    create(A,1,5,first);

    display(first);
}
