#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*last=NULL,*first1=NULL,*last1=NULL;

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
void createList(struct Node *p)
{
    while(p!=NULL)
    {
        struct Node *t;
        t=new Node;
        t->data=p->data;
        t->next=NULL;
        if(first1==NULL)
        {
            first1=last1=t;
        }
        else
        {
            last1->next=t;
            last1=t;
        }
        p=p->next;
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


    createList(first);
    reverse(first,NULL);
    cout<<"\n";
    display(first);
    cout<<"\n";
    display(first1);
    cout<<"\n";

    struct Node *ptr1=first,*ptr2=first1;

    bool f=true;
    while(ptr2!=NULL)
    {
        cout<<ptr1->data<<" "<<ptr2->data<<"\n";
        if(ptr1->data!=ptr2->data)
        {
            f=false;break;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    cout<<f<<"\n";

}


