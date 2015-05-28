#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[100][100], b[100][100], c[100][100], n, m, p;
    cin>>n>>m>>p;
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
    cin>>a[i][j]; 
    for(int i=0; i<m; i++)
    for(int j=0; j<p; j++)
    cin>>b[i][j];
    for(int i=0; i<n; i++)
    for(int j=0; j<p; j++)
    {
        int sum=0;
        for(int k=0; k<m;k++)
        sum=sum+a[i][k]*b[k][j];
        c[i][j]=sum;
    }
    for(int i=0; i<n; i++)
    {for(int j=0; j<p; j++)
      cout<<setw(3)<<c[i][j];
    cout<<endl;
    }
}