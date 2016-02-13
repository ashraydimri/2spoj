#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        double pi=3.14159;
        double a=t/pi;
        double area=a*a*pi;
        area=area/2;
        cout<<setprecision(2)<< fixed<<area;
        cout<<"\n";
        cin>>t;
    }
    return 0;
}
