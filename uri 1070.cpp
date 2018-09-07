#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,count=0;
    cin>>n;
    for(i=n;;i++)
    {
        if(i%2!=0)
        {cout<<i<<endl;

        count++;
        if(count==6)
            break;
        }

    }
    return 0;
}
