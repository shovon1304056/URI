#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,Y,c,d,e,f,n,i,j,k,X,b;
    cin>>X>>Y;
    if(X==1)
    {
        c=Y*4.00;
        printf("Total: R$ %.2f\n",c);

    }
    else if(X==2)
    {
        c=Y*4.50;
        printf("Total: R$ %.2f\n",c);
    }
    else if(X==3)
    {
        c=Y*5.00;
        printf("Total: R$ %.2f\n",c);
    }
    else if(X==4)
    {
        c=Y*2.00;
        printf("Total: R$ %.2f\n",c);
    }
     else if(X==5)
    {
        c=Y*1.50;
        printf("Total: R$ %.2f\n",c);
    }

    return 0;
}
