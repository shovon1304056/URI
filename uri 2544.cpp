#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n,i,j,cnt,sum;
    while (scanf("%d",&n)!=EOF)
    {
        if(n==1)
            {cout<<"0"<<endl;}
        else {
                cnt=0;
            sum=1;
            for(i=1;;i++)
            {
                sum=sum*2;
                cnt++;
                if(sum>n || sum==n)
                    break;

            }
            cout<<cnt<<endl;

        }

    }
    return 0;
}
