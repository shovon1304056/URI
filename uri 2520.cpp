#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int m,n,p,q,i,j,x,y,sum=0;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    m=i;
                    n=j;
                }
                else if(a[i][j]==2)
                {
                    p=i;
                    q=j;
                }
            }
            sum=abs(m-p)+abs(n-q);
        }
        cout<<sum<<endl;
    }
    return 0;


}
