#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,d,a,b,c;
    cin>>n;
    long long int star[n],sheep[n];
    long long int sum_trak=0,sum_sheep=0;

    for(i=0;i<n;i++)
    {
        cin>>sheep[i];
        star[i]=0;
    }
    i=0;
    while(1)
    {



if(i==0 && sheep[i]%2==0)
        {
            star[i]=1;
            if(sheep[i]>0)
                sheep[i]--;
            break;
        }
        else if(i==n-1 && sheep[i]%2==1)
        {
            star[i]=1;
            if(sheep[i]>0)
                sheep[i]--;
            break;
        }
        else if(sheep[i]%2==1)
        {
            sheep[i]--;
            star[i]=1;
            i++;
        }
        else if(sheep[i]%2==0)
        {
            star[i]=1;
            if(sheep[i]>0)
                sheep[i]--;
            i--;
        }


    }
    for(i=0; i<n; i++)
    {
        sum_sheep += sheep[i];
        sum_trak += star[i];
    }
    printf("%lld %lld\n", sum_trak, sum_sheep);
    return 0;
}
