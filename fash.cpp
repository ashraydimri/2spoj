#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int me[1001];
        int we[1001];
        for(int i=0;i<n;i++)
            cin>>me[i];
        for(int j=0;j<n;j++)
            cin>>we[j];

        sort(me,me+n);
        sort(we,we+n);
        int tot=0;
        for(int k=0;k<n;k++)
            tot+=me[k]*we[k];

        cout<<tot;
        cout<<"\n";
        t--;
    }
    return 0;
}
