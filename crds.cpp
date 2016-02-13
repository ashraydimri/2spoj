#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        long long  sum=(n*(3*n+1)/2);

        sum=sum%1000007;
        cout<<sum;
        cout<<"\n";
    }
    return 0;
}
