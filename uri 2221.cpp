#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f,i,j,k,m;
    cin>>n;
    for(k=0;k<n;k++)
    {
        cin>>m;
        cin>>a>>b>>c;
        cin>>d>>e>>f;
        i=(a+b)/2;
        if(c%2==0)
            {i=i+m;}
        j=(d+e)/2;
        if(f%2==0)
        {
            j=j+m;
        }
        if(i==j)
        {
            cout<<"Empate"<<endl;
        }
        else if(i>j)
        {
            cout<<"Dabriel"<<endl;
        }
        else if(i<j)
        {
            cout<<"Guarte"<<endl;
        }
    }
    return 0;
}
