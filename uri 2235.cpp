#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,k;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<"S"<<endl;
    }
    else if(b==c)
    {
        cout<<"S"<<endl;
    }
    else if(c==a)
        {
        cout<<"S"<<endl;
    }
    else if(abs(a-b)==c)
        {
        cout<<"S"<<endl;
    }
     else if(abs(b-c)==a)
        {
        cout<<"S"<<endl;
    }
     else if(abs(c-a)==b)
        {
        cout<<"S"<<endl;
    }
        else
        {
        cout<<"N"<<endl;
    }
    return 0;
}
