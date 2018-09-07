#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,c,f,g,d,e,b;
    //int d,e,b;
    cin>>a;
    if(a>=0 && a<=2000)
    {
        printf("Isento\n");
    }
    else if(a>2000 && a<=3000)
    {

        b=a-2000;

        c=(b*8)/100;
        printf("R$ %.2lf\n",c);
    }
    else if(a>3000 && a<=4500)
    {

       b=a-3000;
        c=((1000*8)/100)+((b*18)/100);

        printf("R$ %.2lf\n",c);
    }
    else{

      b=a-4500;
        c=((1000*8)/100)+((1500*18)/100)+((b*28)/100);

        printf("R$ %.2lf\n",c);
    }
    return 0;

}
