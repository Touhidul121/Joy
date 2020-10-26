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

bool search(struct Node *p,int key)
{

    while(p!=NULL)
    {
        if(p->data==key)
        return true;
        p=p->next;
    }
    return false;
}
int main()
{
 int A[]={3,5,7,10,15};
 create(A,5);

 cout<<search(first,10)<<"\n";
 return 0;
}

