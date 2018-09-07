#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,d=0,sum=0;
    double e,f,g,h;
    int n,i,j,k;
    char ch;
    char p='%';
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>ch;
        sum=sum+a;

        if(ch=='C')
        {
            b=b+a;
        }

        else if(ch=='R')
        {
            c=c+a;
        }
        else if(ch=='S')
        {
            d=d+a;
        }


    }

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",b);
    printf("Total de ratos: %d\n",c);
    printf("Total de sapos: %d\n",d);

    e=(b*100)/float(sum);
    f=(c*100)/float(sum);
    g=(d*100)/float(sum);

    printf("Percentual de coelhos: %.2lf %c\n",e,p);
    printf("Percentual de ratos: %.2lf %c\n",f,p);
    printf("Percentual de sapos: %.2lf %c\n",g,p);



    return 0;
}
