#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int p,q,i,j,k,cnt=0;
    cin>>p>>q;
    cnt=p;
    while(q--)
    {
        cin>>a;
        if(a[0]=='f')
            {cnt--;

        cnt=cnt+2;
            }
            else
                {cnt--;}
    }
    cout<<cnt<<endl;
    return 0;
}
