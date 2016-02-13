#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a1[1000000],b1[1000000];
int main()
{
    int t;
    cin>>t;
    cout<<"\n";
    while(t)
    {
        int a,b;

        cin>>a>>b;
        int i=0;
        for(i=0;i<a;i++)
        cin>>a1[i];
        for(i=0;i<b;i++)
        cin>>b1[i];

        sort(a1,a1+a);
        sort(b1,b1+b);

        if(a==0 && b==0)
        {
            cout<<"uncertain";
            t--;
            continue;
        }

        if(a1[a-1]>=b1[b-1])
            cout<<"Godzilla";
        else if(a1[a-1]<b1[b-1])
            cout<<"MechaGodzilla";

        cout<<"\n";
        t--;
    }
    return 0;
}
