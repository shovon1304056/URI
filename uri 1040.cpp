#include<bits/stdc++.h>
using namespace std;
int main()
{
   double a,Y,c,d,e,f,n,i,j,k,X,b;
   cin>>a>>b>>c>>d;
   n=(a*2+b*3+c*4+d*1)/10;
   printf("Media: %.1lf\n",n);
   if(n>=7)
   {
       cout<<"Aluno aprovado."<<endl;
   }
   else if(n<5)
   {
       cout<<"Aluno reprovado."<<endl;
   }
   else if(n>=5 && n<=6.9)
   {
       cout<<"Aluno em exame."<<endl;
       cin>>e;
       printf("Nota do exame: %.1lf\n",e);
       f=(n+e)/2;
       if(f>=5)
       {
           cout<<"Aluno aprovado."<<endl;
       }
       else if(f<=4.9)
       {
           cout<<"Aluno reprovado."<<endl;
       }
       printf("Media final: %.1lf\n",f);


   }



    return 0;
}
