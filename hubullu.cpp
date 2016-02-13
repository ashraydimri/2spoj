#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b==0)
            cout<<"Airborne wins.\n";
        else
            cout<<"Pagfloyd wins.\n";
    }
    return 0;
}
