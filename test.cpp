#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<fstream>
#include<iomanip>
#include<list>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    int n,x,br=0;
    while(cin>>n)
    {
       if(n%2!=0) st.push(n);
       else {st.push(n);st.push(n);}
    }
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
/*int main()
{
    stack<int>st;
    int n,x,br=0;
    while(cin>>n)
    {
        st.push(n);
    }
    
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top();
    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}*/
/*int main()
{
    stack<int>st;
    int n,x,br=0;
    while(cin>>n)
    {
        st.push(n);
    }
    cin.clear();
    while(cin>>n)
    {
        st.push(n);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
*/
/*int main()
{
    list <int> li1;
    list <int>::iterator id1;
     list <int> li2;
    list <int>::iterator id2;
     list <int> li;
    list <int>::iterator id;
    int n,x,br=0;
    cin>>x;
    while(cin>>n&&br!=x)
    {
        li1.push_back(n);
        br++;
    }
    cin.clear();
    br=0;
    while(cin>>n&&br!=x)
    {
        li2.push_back(n);
        br++;
    }
    cin.clear();
    for(id1=li1.begin(),id2=li2.begin();id1!=li1.end(),id2!=li2.end();id1++,id2++)
    { 
    
       // cout<<"yes";
        n=(*id1)+(*id2);
       // cout<<"yes";
        li.push_back(n);
       // cout<<"yes";
    
    }
    for(id=li.begin();id!=li.end();id++)
    {
        cout<<*id<<" ";
    }
}
*/
/*{
    list <int> li;
    list <int>::iterator id;
    int n,x;
    while(cin>>n)
    {
        li.push_back(n);
    }
    cin.clear();
    cin>>x;
    for(id=li.begin();id!=li.end();id++)
    {
        if((*id)==x){li.erase(id);id--;}
    
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
    /*for(id=li.begin();id!=li.end();id++)
    {
        cout<<*id<<" ";
    }
    
}
*/
/*{
    list <int> li;
    list <int>::iterator id;
    list <int> li1;
    list <int>::iterator id1;
    int n;
    while(cin>>n)
    {
        li.push_back(n);
    }
    cin.clear();
    while(cin>>n)
    {
        li1.push_back(n);
    }
    for(id1=li1.begin();id1!=li1.end();id1++)
    {
        li.push_back(*id1);
    }
    for(id=li.begin();id!=li.end();id++)
    {
        cout<<*id<<" ";
    }
    cout<<endl;
}
*/
/*
struct student
{
    string ime;
    double usp;
};
int main()
{
    list <student> li;
    list <student>::iterator id;
    student x;
    int n,min,br=0;
    while(getline(cin,x.ime))
    {cin>>x.usp;
        li.push_back(x);
        cin.get();

    }
    for(id=li.begin();id!=li.end();id++)
    {
        //cout<<(*id).ime<<" "<<(*id).usp<<endl;
        cout<<left<<setw(30)<<(*id).ime<<right<<setw(10)<<fixed<<setprecision(2)<<(*id).usp<<endl;
    
    }
}
*/
/*{
    list <int> li;
    list <int>::iterator id;
    int n,min,c;
    cin>>c;
    while(cin>>n)
    {
        li.push_back(n);
    }
    min=*li.begin();
    for(id=li.begin();id!=li.end();id++)
    {
        if(*id<min)min=*id;
    }
    cout<<min;
        
}*/
/*{
    list <int> li;
    list <int>::iterator id;
    int n,br=0,c;
    cin>>c;
    while(cin>>n)
    {
        li.push_back(n);
    }
    for(id=li.begin();id!=li.end();id++)
    {
        if(*id==c)br++;
    }
    if(br!=0)cout<<" YES "<<br;

}*/
/*{
    list <int> li;
    list <int>::iterator id;
    int n,br=0;
    double sum=0;
    while(cin>>n)
    {
        li.push_back(n);
        br++;
        
    }
    for(id=li.begin();id!=li.end();id++)
    {
        sum=sum+*id;
    }
    cout<<sum<<" "<<br<<" "<<sum/br;
}*/
/*{
    list <char> li;
    list <char>::iterator id;
    char n;
    while(cin>>n)
    {
        li.push_back(n);
    }
    for(id=li.begin();id!=li.end();id++)
    {
        cout<<char(*id-32)<<" ";
    }
}
*/
/*{
    list <string> li;
    list <string>::iterator id;
    string n;
    while(getline(cin,n))
    {
        li.push_back(n);
    }
    for(id=li.begin();id!=li.end();id++)
    {
        if((*id).size()==6)cout<<*id<<" ";
    }
}*/
/*{
    list <int> li;
    list <int>::iterator id;
    int n,c;
    while(cin>>n)
    {
        li.push_back(n);
    }
    for(id=li.begin();id!=li.end();id++)
    {
        if(*id<0)cout<<*id<<" ";
    }
    cout<<endl;
    for(id=li.begin();id!=li.end();id++)
    {
        
        if(*id>0)cout<<*id<<" ";
    }
}*/

/*{
    list <int> li;
    list <int>::iterator id;
    int n,c;
    for(int i=10;i<100;i++)
    {
        c=i/10;
        n=i%10;
        if((c+n)%7==0)li.push_back(i);
       
    }
    while(cin>>n)
    {
        li.push_back(n);
    }
    
    for(id=li.begin();id!=li.end();id++)
    {
        cout<<*id<<" ";
    }
}
*/
/*
struct book
{
    string zagl,avtor;
    int god;
    double cena;
};
int main()
{
    book *p=new book[100];
    int n;
    cin>>n;
    for(int i;i<n;i++)
    {
    getline(cin,(p+i)->zagl);
    getline(cin,(p+i)->avtor);
    cin>>p->god>>(p+i)->cena;
    cin.get(;) 
    }
    
    for(int i;i<n;i++)
    cout<<left<<setw(30)<<(p+i)->zagl<<setw(10)<<(p+i)->avtor<<setw(6)<<right<<(p+i)->god<<right<<setw(10)<<fixed<<setprecision(2)<<(p+i)->cena;
    
}
*/
/*{
    int a[100],n,min,max,i,br=0;
    double sum=1;
    cin>>n;
    for( i=0;i<n;i++)
    cin>>*(a+i);
    for( i=0;i<n;i++)
    {
        
        if(*(a+i)%3==0){sum=sum*(*(a+i));}
    }
    cout<<sum;
}*/
/*{
    int a[100],n,min,max,i;
    cin>>n;
    for( i=0;i<n;i++)
    cin>>*(a+i);
    min=*(a);
    max=*(a);
    for( i=0;i<n;i++)
    {
        if(*(a+i)>max)max=*(a+i);
        if(*(a+i)<min)min=*(a+i);
    }
    cout<<min<<" "<<max;
}
*/
/*
10;
adress m;
adres m;
10;
adres na 34;
34
adres 45
45

*/
/*{
    int a[5]={7,2,4,3,1},i;
    for( i=0;i<5;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for( i=0;i<5;i++)
    cout<<*(a+i)<<" ";
    cout<<endl;
    int *p=a;
    for( i=0;i<5;i++)
    {cout<<*p<<" ";
    p++;
    }
}
*/