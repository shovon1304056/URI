#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j ,n,a,b,c,d,e,f,g;

    cin>>a>>b;
    if(a==b)
    {
      printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else if(a<12 && b<12)
    {
        i=abs(a-24-b);
        j=i%24;
        printf("O JOGO DUROU %d HORA(S)\n",j);

    }
    else if((a>=12 && b>12) || (a>12 && b>=12))
    {
        e=abs(a-24-b);
        printf("O JOGO DUROU %d HORA(S)\n",e);
    }
    else {
        if(a>12 && b<12){
          c=24-a;
          d=b;
        }
    else if(a<12 && b>12)
    {
        c=12-a;
        d=b-12;
    }
     n=c+d;
    printf("O JOGO DUROU %d HORA(S)\n",n);
    }



    return 0;

}
