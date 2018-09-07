#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,p,q,r,t,s;
    cin>>a;
    if(a>=0 && a<=100)
    {
        if(a>=0 && a<=25)
        {
            cout<<"Intervalo [0,25]"<<endl;
        }
        else if(a>25 && a<=50)
        {
            cout<<"Intervalo (25,50]"<<endl;
        }
        else if(a>50 && a<=100)
        {
            cout<<"Intervalo (75,100]"<<endl;
        }
    }
    else
    {

        cout<<"Fora de intervalo"<<endl;
    }


    return 0;
}
