#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,p,q,r,t,s;
    cin>>a>>b>>c;
    p=(pow(b,2.0)-(4.0*a*c));
    //cout<<p<<endl;
    q=sqrt(p);
    //cout<<q<<endl;
    r=(-b+q)/(2.0*a);
    //cout<<r<<endl;
    s=(-b-q)/(2.0*a);
    //cout<<s<<endl;
    //d=r/(2*a);
    //t=s/(2*a);
    if(a!=0 && q>0){
    printf("R1 = %.5lf\n",r);
    printf("R2 = %.5lf\n",s);

    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}
