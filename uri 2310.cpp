#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,a,b,c,d,e,f,i,j,k,m=0,n=0,p=0,q=0,r=0,s=0,l;
    char player[1000];
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>player;
        cin>>a>>b>>c;
        cin>>d>>e>>f;
        m+=a;
        n+=b;
        p+=c;
        q+=d;
        r+=e;
        s+=f;

    }
    j=(q/m)*100;
    k=(r/n)*100;
    l=(s/p)*100;
    printf("Pontos de Saque: %.2lf %%.\n",j);
     printf("Pontos de Bloqueio: %.2lf %%.\n",k);
      printf("Pontos de Ataque: %.2lf %%.\n",l);
      return 0;
}
