#include<bits/stdc++.h>
using namespace std;

class Node
{
private:
        int data;
        Node* next;

public:
    Node(){}

    Node* insert_last(int x,Node *first,Node *last)
    {
     Node *t;
     t=new Node;
     t->data=x;
     t->next=NULL;
     if(first==NULL)
            first=last=t;
     else
     {
         last->next=t;
         last=t;
     }
     return first;
    }
    void display(Node *p)
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }
    int ans(Node *p)
    {
        return p->data;
    }
};

int main()
{
    int n,a;
    cin>>n;
    Node ob;
    Node *first=NULL,*last=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        first=ob.insert_last(a,first,last);
    }
    cout<<ob.ans(first)<<" ";
    ob.display(first);
}
