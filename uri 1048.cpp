#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g;
    char h='%';
    //int n,p,q ,r;
    cin>>a;

    if(a>=0 && a<=400)
    {
        b=a+((a*15)/100);
        c=b-a;
        printf("Novo salario: %.2lf\n",b);
        printf("Reajuste ganho: %.2lf\n",c);
        printf("Em percentual: 15 %c",h);
        printf("\n");



    }
   else if(a>400 && a<=800)
    {
        b=a+(a*12)/100;
        c=b-a;
        printf("Novo salario: %.2lf\n",b);
        printf("Reajuste ganho: %.2lf\n",c);
        printf("Em percentual: 12 %c",h);
        printf("\n");


    }
   else if(a>800 && a<=1200)
    {
        b=a+(a*10)/100;
        c=b-a;
        printf("Novo salario: %.2lf\n",b);
        printf("Reajuste ganho: %.2lf\n",c);
       printf("Em percentual: 10 %c",h);
        printf("\n");


    }
    else if(a>1200 && a<=2000)
    {
        b=a+(a*7)/100;
        c=b-a;
        printf("Novo salario: %.2lf\n",b);
        printf("Reajuste ganho: %.2lf\n",c);
        printf("Em percentual: 7 %c",h);
        printf("\n");


    }
   else if(a>2000)
    {
        b=a+(a*4)/100;
        c=b-a;
        printf("Novo salario: %.2lf\n",b);
        printf("Reajuste ganho: %.2lf\n",c);
        printf("Em percentual: 4 %c",h);
        printf("\n");


    }


    return 0;

}
