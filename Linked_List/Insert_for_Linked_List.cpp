#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=new Node;
 first->data=A[0];
 first->next=NULL;

 last=first;

 for(int i=1;i<n;i++)
 {
     t=new Node;
     t->data=A[i];
     t->next=NULL;
     last->next=t;
     last=t;
 }
}
int count_node(struct Node *p)
{
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
    if(index<0 || index>count_node(first))
        return;

    struct Node *t;
    t=new Node;
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;

        t->next=p->next;
        p->next=t;
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
int main()
{
 int A[]={3,5,7,10,15};
 create(A,5);

 insert(first,0,55);
 display(first);
 cout<<"\n";
 insert(first,3,44);
 display(first);
 return 0;
}


