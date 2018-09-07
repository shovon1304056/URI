#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,cnt=0;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        for(i=0;i<a;i++)
        {
            cin>>c>>d;
            if(c==b && d==0)
                cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }

    return 0;
}
