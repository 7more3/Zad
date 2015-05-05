#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<fstream>
#include<iomanip>
#include<list>
#include<stack>
#include<queue>
//realizaciq na funkcii za stack
//custum Push/pop(x,p)
//x - 4islo
//p - na4alen okazatel
using namespace std;
struct Stack
{
    int data;
    Stack *link;
};
void put(int x,Stack *&p)
{
    Stack *q = new Stack;
    q->data = x;
    q->link = p;
    q = r;
}
void pop(Queue *&p,Queue *&p)
{
    if(p!=NULL)
    {
    Stack *q = p;
    p = p->link;
    delete q;  
    }
}

int main()
{
    Stack *p=NULL;
}