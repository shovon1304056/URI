#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0,i,j,k,m,n,o;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            cnt++;
    }
    if(cnt%2==0)
        cout<<s<<"0"<<endl;
    else
        cout<<s<<"1"<<endl;
    return 0;

}
