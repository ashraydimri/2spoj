#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(a!=0 && b!=0)
    {
        int att[10002],def[10002];
        int i;
        for(i=0;i<a;i++)
            cin>>att[i];
        for(i=0;i<b;i++)
            cin>>def[i];
        sort(att,att+a);
        sort(def,def+b);
        int mina,mind,mind1;
        /*mina=att[0];
        mind=def[0];
        mind1=def[1];
        att[0]>=def[0] && */

        if(att[0]<def[1])
            cout<<"Y\n";
        else
            cout<<"N\n";

        cin>>a>>b;
    }
    return 0;
}
