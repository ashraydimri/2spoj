#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        char arr[250];
        cin>>arr;
        int len=strlen(arr)/t;
        char fin[len][t];
        int i,j,k=0;
        for(i=0;i<len;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<t;j++)
                {
                    fin[i][j]=arr[k++];
                }
            }
            else
            {
                for(j=t-1;j>=0;j--)
                {
                    fin[i][j]=arr[k++];
                }
            }
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
            {
                cout<<fin[j][i];
            }
        }

        cout<<"\n";
        cin>>t;
    }
    return 0;
}
