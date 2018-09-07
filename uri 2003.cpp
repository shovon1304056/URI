#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k,n;
    while(scanf(" %d:%d",&a,&b)!=EOF)
    {
        if(a<7)
        {
            cout<<"Atraso maximo: 0"<<endl;
        }
        else
        {
            c=(a-7)*60+b;
            cout<<"Atraso maximo: "<<c<<endl;
        }
    }
    return 0;
}
