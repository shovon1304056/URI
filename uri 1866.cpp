#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,n;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c%2==0)
        {
            cout<<"0"<<endl;
        }
        else if(c%2==1)
        {
            cout<<"1"<<endl;
        }
    }

    return 0;
}
