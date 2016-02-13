#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    unsigned int sum=0;
    //int sq[11];
    unsigned int memo[1000002]={0};
    int flag=0;

    if(n==1)
        {cout<<"1";return 0;}
    while(n!=1)
    {
        sum=0;
        while(n!=0)
        {
            sum+=(n%10)*(n%10);
            n=n/10;
        }

        if(memo[sum]==1)
        {
            cout<<"-1";
            return 0;
        }
        n=sum;
        memo[sum]=1;
        flag++;
    }
    cout<<flag;
    return 0;
}
