#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,d,e,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
    int a;
    cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a;

            if(a%2==0)

                cnt2++;

           if(a%3==0)

                cnt3++;

           if(a%4==0)

                cnt4++;

            if(a%5==0)

                cnt5++;
        }
        cout<<cnt2<<" Multiplo(s) de 2"<<endl;
        cout<<cnt3<<" Multiplo(s) de 3"<<endl;
        cout<<cnt4<<" Multiplo(s) de 4"<<endl;
        cout<<cnt5<<" Multiplo(s) de 5"<<endl;


       return 0;
}
