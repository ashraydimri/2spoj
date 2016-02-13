#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long  a,b,c;
        cin>>a>>b>>c;
        long long  terms=(c*2)/(a+b);
        cout<<terms;
        long long  i;
        long long  d=(((2*c)/terms)-(2*a));
        long long  di=(b-a)/(terms-5);
        cout<<"\n";
        long long  fi=a-(2*di);
        for(i=0;i<terms;i++)
        {
            cout<<fi+(i*di);
            cout<<" ";
        }
        t--;
    }
    return 0;
}
