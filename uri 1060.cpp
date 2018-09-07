#include<bits/stdc++.h>
using namespace std;
int main()
{
    double c,f,g,d,e,b;
    double a[1000],p[1000];
    int count=0,i;
    for(i=1;i<=6;i++)
    {
        cin>>a[i];
         if(a[i]>=0)
        {
            count=count+1;
        }
    }
    if(count>=1){
    for(i=1;i<=6;i++)
    {
        if(a[i]>=0){
          p[i]=a[i];
          //cout<<p[i]<<endl;
        }
        g=g+p[i];
    }
    f=g/count;

    cout<<count<<" valores positivos"<<endl;
    printf("%.1lf\n",f);
    }

    return 0;
}
