#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double ans;
        ans=0.25 + 4*(double)n*(double)n;
        printf("Case %d: %0.2f\n",j,ans);
        j++;
    }
    return 0;
}
