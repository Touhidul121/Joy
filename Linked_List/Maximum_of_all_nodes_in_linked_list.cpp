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

int maximum(struct Node *p)
{
    int mx=0;
    while(p!=NULL)
    {
        mx=max(mx,p->data);
        p=p->next;
    }
    return mx;
}
int main()
{
 int A[]={3,5,7,10,15};
 create(A,5);

 cout<<maximum(first)<<"\n";
 return 0;
}

