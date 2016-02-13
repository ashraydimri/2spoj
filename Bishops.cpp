#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int ans;
        if(n==0 || n==1)
           ans=n;
        else
            ans=(2*n)-2;
        cout<<ans<<"\n";
    }
    return 0;
}
