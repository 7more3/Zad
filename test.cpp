#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<fstream>
#include<iomanip>
#include<list>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    queue<char>st;
    long long n,c=0,b=0,min,a,a1,a2;
    double s=0;
char x;
    string ss,sss;
    
    while(cin>>x)
    {   
        st.push(x);
    }
    while(!st.empty())
    {
        if(st.front()>64&&st.front()<91)b++;
        else if(st.front()>='0'&&st.front()<='9')c++;
        else s++;
        st.pop();
    }
    cout<<"Glavni bukvi "<<b<<" malki bukvi "<<s<<" 4isla "<<c;
    
    cout<<endl;
    
}
/*struct stud
{
    int nomer;
    string ime;
    double usp;
};
int main()
{
    queue<stud>st;
    queue<stud>st2;
    queue<stud>st3;
    long long n,c=0,b=0,min,a,a1,a2;
    double s=0;
    stud x;
    string ss,sss;
    
    while(cin>>x.nomer)
    {   
        cin.get();
        getline(cin,x.ime);
        cin>>x.usp;
        st.push(x);
    }
    while(!st.empty())
    {
        x=st.front();
        cout<<setw(5)<<left<<x.nomer<<setw(30)<<x.ime<<right<<setw(5)<<fixed<<setprecision(2)<<x.usp<<endl;
        b++;
        s=x.usp+s;
        st.pop();
    }
    cout<<"Sr.uspech "<<fixed<<setprecision(2)<<s/b<<endl;
    
    cout<<endl;
    
}*/
/*int main()
{
    queue<int>st;
    queue<int>st2;
    queue<int>st3;
    long long n,c=0,b=0,min,a,a1,a2;
    string s,ss,sss;
    int x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    n=st.front();
    while(!st.empty())
    {
        if(st.front()>0)st2.push(st.front());
        else  st3.push(st.front());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.front()<<" ";
        st2.pop();
    }
    cout<<endl;
    while(!st3.empty())
    {
        cout<<st3.front()<<" ";
        st3.pop();
    }
}*/
/*int main()
{
    queue<int>st;
    queue<int>st2;
    long long n,c=0,b=0,min,a,a1,a2;
    string s,ss,sss;
    int x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    n=st.front();
    while(!st.empty())
    {
        
        st2.push(st.front());
        if(!st.empty())st.pop();
        if(!st.empty())st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.front()<<" ";
        st2.pop();
    }


}*/
/*int main()
{
    queue<int>st;
    queue<int>st2;
    long long n,c=0,b=0,min,a,a1,a2;
    string s,ss,sss;
    int x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    n=st.front();
    while(!st.empty())
    {
        
        st2.push(st.front());
        st2.push(st.front()-st.front()-st.front());
        st.pop();
    }
    while(!st2.empty())
    {
        cout<<st2.front()<<" ";
        st2.pop();
    }


}*/
/*int main()
{
    queue<int>st;
    long long n,c=0,b=0,min,a,a1,a2;
    string s,ss,sss;
    int x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    n=st.front();
    st.pop();
    //c=st.size();
    while(!st.empty())
    {
        
        if(n>=st.front()){x++;break;}
        else
        {
            n=st.front();
        }
        st.pop();
    }
    if(x==0)cout<<"Podredena";
    else cout<<"NEpodredena";

}*/
/*int main()
{
    queue<double>st;
    long long n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    n=0;
    c=st.size();
    while(!st.empty())
    {
        b++;
        n=n+st.front()*pow(10,c-b);
        st.pop();
    }
    cout<<n;
}*/
/*int main()
{
    queue<double>st;
    double n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    min==st.front();
    while(!st.empty())
    {
        if(st.front()<min)min=st.front();
        st.pop();
    }
    cout<<min;
}*/
/*int main()
{
    queue<double>st;
    double n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>x;
    while(cin>>n)
    {   
        st.push(n);
    }
    while(!st.empty())
    {
        b++;
        if(st.front()==x)cout<<"na #"<<b<<" ",c++;
        st.pop();
    }
    if(c==0)cout<<"nqma "<<x<<"v tazi opashka";
}*/
/*int main()
{
    queue<double>st;
    double n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>x;
    while(cin>>n)
    {   
        st.push(n);
    }
    while(!st.empty())
    {
        if(st.front()<=x)b++;
        st.pop();
    }
    cout<<b;
}*/
/*int main()
{
    queue<double>st;
double n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    cout<<fixed<<setprecision(2)<<st.front();
    b=st.front();
    st.pop();
    while(!st.empty())
    {
        
        cout<<" + "<<fixed<<setprecision(2)<<st.front();
        b=b+st.front();
        st.pop();
    }
    cout<<" = "<<b;
}*/

/*int main()
{
    queue<int>st;
    int n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>n;
    for(int i=100;i<1000;i++)
    {
        a=i%10;
        a1=i/10%10;
        a2=i/10/10%10;
        if(a+a1+a2==n)st.push(i);
    }
    min=st.size();
    while(!st.empty())
    {
        cout<<st.front()<<" ";
        st.pop();
    }
    cout<<endl<<min<<endl;
}*/

/*int main()
{
    queue<char>st;
    char n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    while(!st.empty())
    {
        cout<<char(st.front()-32)<<" ";
        st.pop();
    }
}*/
/*int main()
{
    queue<int>st;
    int n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    while(cin>>n)
    {   
        st.push(n);
    }
    cin.clear();
    cin>>a>>a1;
    st.push(a),st.push(a1);
    st.pop(),st.pop();
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.front()<<" ";
        st.pop();
    }
}*/
/*int main()
{
    stack<int>st;
    int n,c=0,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>n;
    while(n!=0)
    {   st.push(n%10);
        n=n/10;
    }
    while(!st.empty())
    {
        if(st.top()%2==0)b=b*10+st.top();
        else c=c*10+st.top();
        st.pop();
    }
    cout<<b<<" "<<c;
}*/
/*
int main()
{
    stack<int>st;
    int n,b=0,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>n;
    while(n!=0)
    {   st.push(n%10);
        n=n/10;
    }
    while(!st.empty())
    {
        b=b*10+st.top();
        if(!st.empty())st.pop();
        if(!st.empty())st.pop();
        //st.pop();
    }
    cout<<b;
}*/
/*int main()
{
    stack<char>st;
    int n,br=3,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>n;
    while(n!=0)
    {   a=n%16;
        if(a==16)st.push('g');
        if(a==15)st.push('f');
        if(a==14)st.push('e');
        if(a==13)st.push('d');
        if(a==12)st.push('c');
        if(a==11)st.push('b');
        if(a==10)st.push('a');
        if(a>=0 && a<=9)st.push('0'+a);
        n=n/16;
    }
    while(!st.empty())
    {
        
        cout<<st.top()<<" ";
        st.pop();
    }
}*/
/*int main()
{
    stack<int>st;
    int n,br=3,min,a,a1,a2;
    string s,ss;
    double x=0;
    cin>>n;
    while(n!=0)
    {
        st.push(n%2);
        n=n/2;
    }
    while(!st.empty())
    {
        
        cout<<st.top()<<" ";
        st.pop();
    }
}*/
/*int main()
{
    stack<char>st;
    stack<char>st1;
    stack<char>st2;
    int n,br=3,min,a,a1,a2;
    string s,ss;
    double x=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }
    
    //cout<<st1.top();
    while(!st.empty())
    {
        cout<<" b "<<st.top()<<endl;
        if(st.top()=='`'){st.pop();st.pop();st.pop();}
       st2.push(st.top()); st.pop();
    }
    
    /*while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while(!st.empty())
    {
        
        cout<<st.top()<<" ";
        st.pop();
    }
    //kop - kad`osd`pds`
    
}*/
/*int main()
{
    stack<char>st;
    stack<char>st1;
    stack<char>st2;
    int n,br=3,min,a,a1,a2;
    string s,ss;
    double x=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }
  
    //cout<<st1.top();
    while(!st.empty())
    {
        cout<<" b "<<st.top()<<endl;
        if(st.top()=='`'){st.pop();st.pop();st.pop();}
       st2.push(st.top()); st.pop();
    }
    
    while(!st2.empty())
    {
        
        cout<<st2.top()<<" ";
        st2.pop();
    }
    //kop - kad`osd`pds`
    
}*/
/*
int main()
{
    stack<char>st;
    int n,br=3,min,a,a1,a2;
    string s,ss;
    double x=0;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(br==0)st.push(s[i]),br=3;
        else br--;
    }
    while(!st.empty())
    {
        
        cout<<st.top()<<" ";
        st.pop();
    }
}*/
//asdapeyr xyiso pgp3mf fodlfk
/*int main()
{
    stack<int>st;
    int n,br=0,min,a,a1,a2;
    double x=0;
    for(int i=100;i<1000;i++)
    {
        a=i%10;
        a1=i/10%10;
        a2=i/100;
        if((a+a1+a2)==10)st.push(i);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}*/
/*int main()
{
    stack<int>st;
    int n,br=0,min;
    double x=0;
    while(cin>>n)
    {
       st.push(n);
       x=x+n;
       br++;
    }
    min=st.top();
    while(!st.empty())
    {
        if(st.top()<min)min=st.top();
        st.pop();
    }
    cout<<x<<" "<<x/br<<" "<<min;
}*/
/*int main()
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
    
}*/
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