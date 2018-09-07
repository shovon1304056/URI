#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,n;
    char p='%';
    cin>>a>>b;
    c=((abs(a-b)*100)/a);
    printf("%.2lf%c\n",c,p);
    return 0;
}
