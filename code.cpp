#include"iostream"
#include"bits/stdc++.h"
using namespace std;
struct Node
{
    int info;
    Node *link;
};
Node *head=NULL,*ptr,*nptr,*prev;
int data;
int main()
{
    int i=0;
    for(i=0;i<5;i++)
    {
        cin>>data;
        
    if(head==NULL)
    {
        nptr=new Node;
        nptr->info=data;
        nptr->link=NULL;
        head=nptr;
    }
    else
    {
        nptr=new Node;
        nptr->info=data;
        nptr->link=NULL;
        ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=nptr;
    }
    }
    int loc,item;
    cin>>loc>>item;
    nptr=new Node;
    nptr->info=item;
    ptr=head;
    while(loc-- && ptr!=NULL)
    {
        if(loc==1)
        {
            nptr->link=ptr->link;
            ptr->link=nptr;
        }
        else
        {
            ptr=ptr->link;
        }
    }
    ptr=head;
    while(ptr->link!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<ptr->info;
}
