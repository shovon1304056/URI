#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,q,r,d,i,j;
    cin>>a>>b;

    //cin>>a>>b;
    for(r=0;r<abs(b);r++)
    {
        c=a-r;
        if(c%b==0)
        {q=c/b;
        break;}
    }
    cout<<q<<" "<<r<<endl;



    return 0;
}
