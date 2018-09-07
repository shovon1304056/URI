#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j;
    char s[1000];
    while (scanf("%s",&s)!=EOF)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>j;
            cout<<s[j-1];
        }
        cout<<endl;
    }
    return 0;
}
