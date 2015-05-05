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
void put(int x,Queue *&p,Queue *&p)
{
    Queue *r = new Queue;
    r->data = x;
    r->link = NULL;
    if(p == NULL)p = r;
    else q->link = r;
    q = r;
}
void pop(Queue *&p,Queue *&p)
{
    if(p!=NULL)
    {
    Queue *r = p;
    p = p->link;
    r->link = NULL;
    if(p == NULL)q = NULL;
    delete r;  
    }
}

int main()
{
    Queue *p=NULL,*q=NULL;
    int x,s=0;
    while(cin>>x)put(x,p,q)
    while(p!=NULL)
    {
        s=s+p->data;
        cout<<p->data<<" ";
        pop(p,q);
    }
    cout<<endl<<s<<endl;
}