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

void sorted_insert(struct Node *p,int x)
{
    struct Node *t,*q;
    t=new Node;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
        first=t;

    else{
            while(p!=NULL && p->data<x)
            {
                q=p;
                p=p->next;
            }
            if(p==first)
            {
                t->next=first;
                first=t;
            }
            else
            {
                t->next=q->next;
                q->next=t;
            }
    }
}

int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert_last(a);
    }
    display(first);
    cout<<"\n";

    sorted_insert(first,23);
    display(first);

}
