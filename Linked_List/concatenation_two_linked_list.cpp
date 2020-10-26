#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*last=NULL,*second=NULL;

struct Node * insert_last(struct Node *head,int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL)
    {
     head=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
    return head;
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

bool sorted(struct Node *p)
{
    int prev=INT_MIN;
    while(p!=NULL)
    {
        if(p->data<prev)
            return false;
        prev=p->data;
        p=p->next;
    }
    return true;
}

void concatenate(struct Node *p)
{
    while(p->next!=NULL)
        p=p->next;
    p->next=second;
}
void reverse(struct Node *p,struct Node *q)
{
    if(p!=NULL)
    {
        reverse(p->next,p);
        p->next=q;
    }
    else first=q;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        first=insert_last(first,a);
    }
    display(first);
    cin>>m;

    for(int i=0;i<m;i++)
    {
        cin>>a;
        second=insert_last(second,a);
    }
    cout<<"\n";
    display(second);

    concatenate(first);
    cout<<"\n";
   display(first);
}


