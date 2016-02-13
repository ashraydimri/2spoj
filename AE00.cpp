#include<iostream>
#include<cstdio>
using namespace std;
int tab[10001][10001]={0};
int main()
{
    int n;
    cin>>n;
    int a=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;i*j<=n;j++)
        {
            if(tab[i][j]==0 && tab[j][i]==0)
            {
                a=a+1;
                tab[i][j]=1;
                tab[j][i]=1;
            }
        }
    }
    cout<<a;
    return 0;
}
