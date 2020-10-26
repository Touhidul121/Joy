#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*last=NULL;

void insert_last(int x)
{
    struct Node *t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
     first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
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

void reverse(struct Node *p,struct Node *q)
{
    if(p!=NULL)
    {
        reverse(p->next,p);
        p->next=q;
    }
    else first=q;
}

void remove_duplicate(struct Node *p)
{
 struct Node *q=p->next;
 while(q!=NULL)
 {
     if(p->data!=q->data)
     {
         p=q;
         q=q->next;
     }
     else
     {
         p->next=q->next;
         delete q;
         q=p->next;
     }
 }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert_last(a);
    }
    display(first);

    remove_duplicate(first);
    cout<<"\n";
    display(first);



}


