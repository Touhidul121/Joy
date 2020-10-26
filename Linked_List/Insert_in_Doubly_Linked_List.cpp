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

int count_node(struct Node *p)
{
    if(p==NULL)return 0;

    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
void insert(struct Node *p,int index,int x)
{
    struct Node *t;

    if(index<0 || index>count_node(p))
    {
       return;
    }

    if(index==0)
    {
        t=new Node;
        t->prev=NULL;
        t->data=x;
        t->next=first;
        first->prev=t;
        first=t;
    }

    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;

        t=new Node;

        t->data=x;
        t->prev=p;

        t->next=p->next;
        if(p->next!=NULL)p->next->prev=t;

        p->next=t;


    }
}
int main()
{
    int A[]={1,3,5,6,7};

    create(A,sizeof(A)/sizeof(A[0]));

    display(first);

    insert(first,3,34);

    cout<<"\n";
    display(first);
}

