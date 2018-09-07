#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=1001 && n<=9999)
            n=n-1;
        else
            break;
    cout<<n<<endl;
    }
    return 0;
}
