#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<fstream>
#include<iomanip>
#include<list>
#include<stack>
#include<queue>
//realizaciq na funkcii za queue
//custum Push/pop(x,p,q)
//x - 4islo
//p - na4alen okazatel
//q - kraen okazatel
using namespace std;
struct List
{
    int data;
    List *link;
};
void putBack(int x,List *&p)
{
    List *q = new List;
    q->data = x;
    q->link = NULL;
    if(p == NULL)p = q;
    else{
        List *r=p;
        while(r->link!=NULL)
        r=r->link;
        r->link=q;
        }
}
void err(List *&p,List *q)
{
    if(q==p)p=p->link;
    else{
        List *r=p;
        while(r->link!=q)
        r=r->link;
        r->link=q->link;
    }
    delete q;
}
int main()
{
    List *p=NULL;
    
    int x;
    while(cin>>x)
    putBack(x,p);
    List *s=p;
    List *min=p;
    List *max=p;
    while(s!=NULL)
    {
        if(s->data<min->data)min->data=s->data;
        if(s->data>max->data)max->data=s->data;
        s=s->link;
    }
   
    cout<<min->data<<" "<<max->data<<endl;
}
/*int main()
{
    List *p=NULL;
    
    int x;
    while(cin>>x)
    putBack(x,p);
    List *r=p;
    List *s=p;
    r=r->link;
    r=r->link;
    err(p,r);
    while(s->link!=NULL)
    {
        cout<<s->data<<" ";
        s=s->link;
    }
    cout<<s->data<<endl;
}*/