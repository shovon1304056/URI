#include<bits/stdc++.h>
using namespace std;
int main()
{

    int p[1000];
    double i,j ,n,q,b,c,d,a;

    cin>>a>>b>>c;
    if((a+b>c) && (b+c>a) && (c+a>b))
    {
        n=a+b+c;
        printf("Perimetro = %.1lf\n",n);
    }
    else
    {
        n=(c*(a+b))/2;
        printf("Area = %.1lf\n",n);
    }

    return 0;
}
