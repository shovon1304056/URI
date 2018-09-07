#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n;
    while(scanf("%d",&n)&& n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a;

             if(a%2)
               {b=a*2-1;}


            else
                {b=a*2-2;}
         cout<<b<<endl;
        }
    }
    return 0;
}
