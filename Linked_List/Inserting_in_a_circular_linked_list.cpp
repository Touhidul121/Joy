#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head=NULL,*last=NULL;

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

void display(struct Node *p)
{
    if(p==NULL)return;
    do                   // do while loop use koro karon prothome p=head tai jodi while loop use kori taile loop akbaro o ghurbe na...jodi begin value and loop break er value same hoy taile do while loop use koro
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int count_node(struct Node *p)
{
    if(p==NULL)return 0;
    int count=0;
    do
    {
        count++;
        p=p->next;
    }while(p!=head);

    return count;
}
void insert(struct Node *p,int index,int x)
{
    struct Node *t;

    if(index< 0 || index>count_node(p))
        return;
    if(index==0)
    {

        if(head==NULL) //if it is the first node
        {
            head=new Node;
            head->data=x;
            head->next=head;
        }
        else
        {
            while(p->next!=head)
                p=p->next;
            t=new Node;
            t->data=x;
            t->next=head;
            p->next=t;
            head=t;
        }
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;

        t=new Node;
        t->data=x;
        t->next=head;
        t->next=p->next;
        p->next=t;
    }
}

int Delete(struct Node *p,int index)
{
 struct Node *q;
 int x;
 if(index <0 || index>count_node(head))
    return -1;

 if(index==1)
 {
     while(p->next!=head)
        p=p->next;
     x=head->data;

     if(head==p) // if there is only one node
     {
         delete head;
         head=NULL;
    }
    else
    {
        p->next=head->next;
        delete head;
        head=p->next;
    }

 }
 else
 {
     for(int i=0;i<index-2;i++)
        p=p->next;
     q=p->next;
     x=q->data;
     p->next=q->next;
     delete q;

 }
 return x;
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

    display(head);

    insert(head,0,34);

    display(head);

    int res=Delete(head,1);
    cout<<res<<"\n";

    display(head);

    Delete(head,2);

    display(head);
}
