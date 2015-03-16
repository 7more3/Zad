#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<fstream>
#include<iomanip>
#include<list>
using namespace std;
int main()
{
    list <int> li;
    list <int>::iterator id;
    list <int>::iterator p;
    int n,x;
    while(cin>>n)
    {
        li.push_back(n);
    }
    cin.clear();
    cin>>x;
    for(id=li.begin();id!=li.end();id++)
    {
        p=(id--);
        if((*id)==x){li.erase(id);id=p;}
        
        id++;
    }
   /* for(id=li.begin();id!=li.end();id++)
    {
        n=(*id)*(*id);
    li.insert(id,n);
    //id--;
    }
    */
   /* for(id=li.begin();id!=li.end();id++)
    {
        n=*id;
    li.insert(++id,-(n));
    id--;
    }
    */
    /*cin.clear();
    cin>>n;
    for(id=li.begin();id!=li.end();id++)
    if(*id==n)break;
    id++;
    li.insert(id,-n);
    */
    for(id=li.begin();id!=li.end();id++)
    {
        cout<<*id<<" ";
    }
    
}