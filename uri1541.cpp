#include<bits/stdc++.h>
using namespace std;
int main()
{
float     a,b,c,i,j,n,k;
    while (scanf("%f",&a)!=EOF)
    {
        if(a==0)
        {
            break;
        }
        else{
cin>>b>>c;
   float d=((a*b)/c)*100;
    //cout<<d<<endl;
   int  p=sqrt(d);
    cout<<p<<endl;
        }
    }
    return 0;
}
