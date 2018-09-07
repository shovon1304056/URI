#include<bits/stdc++.h>
using namespace std;

int main()
{
    int input,a,b,c,d;
    cin>>input;
    a=input/365;
    cout<<a <<" ano(s)"<<endl;
    b= input%365;
    //cout<<b<<endl;
    c=b/30;
    cout<<c <<" mes(es)"<<endl;
    d=b%30;
    cout<<d <<" dia(s)"<<endl;


    return 0;
}
