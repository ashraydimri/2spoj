#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=-1)
    {
        int flag=0;
        int j=1;
        for(int i=1;i<=n;i=i+(6*(j-1)))
        {
            if(n==i)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag==1)
            cout<<"Y\n";
        else
            cout<<"N\n";
        cin>>n;
    }
    return 0;
}
