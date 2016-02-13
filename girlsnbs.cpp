#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(a!=-1 && b!=-1)
    {
        double mi;
        if(a<b)
          {
             mi=a;
             mi+=1;
             double ans=b/mi;
             cout<<ceil(ans);
          }
        else
            {mi=b;
            mi+=1;

             double ans=a/mi;
             cout<<ceil(ans);
            }

        cout<<"\n";
        cin>>a>>b;
    }
    return 0;
}
