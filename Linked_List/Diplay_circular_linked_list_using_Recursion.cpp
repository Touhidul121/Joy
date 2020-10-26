#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*last;

void insert_last(int x)
{

    if(head==NULL)
    {
        head=new Node;
        head->data=x;
        head->next=head;
        last=head;
    }
    else
    {
        struct Node *t;
        t=new Node;
        t->data=x;
        t->next=head;
        last->next=t;
        last=t;

    }
}

void display(struct Node *p,bool flag)
{
    if(flag==false || p!=head)
    {
      flag=true;
      cout<<p->data<<" ";
       display(p->next,flag);
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

    display(head,false);
}

