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

struct Node *Lsearch(struct Node *p,int key)
{
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(p->data==key)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
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

 struct Node *ans=Lsearch(first,10);
 if(ans==NULL)cout<<"NOT Found"<<"\n";
 else
 cout<<"Found"<<"\n";

 display(first);

 return 0;
}


