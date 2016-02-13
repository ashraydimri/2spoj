#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%10==0)
        cout<<"2";
    else
    {
        cout<<"1";
        cout<<"\n";
        cout<<n%10;
    }
    return 0;
}
