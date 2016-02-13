#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
unsigned int num[3500], len;
inline bool prime(unsigned int x)
{
    unsigned int i, last =sqrt(x);
    for(i=2;i<=last;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void gen()
{
    for (unsigned int i = 2; i < 32000; i++)
    {
        if (prime(i))
        {
            num[len++] = i;
        }
    }
}
inline bool process(unsigned long x)
{
    unsigned int i, last = sqrt(x);
    for (i = 0; i < len && num[i] <= last; i++)
    {
        if (!(x % num[i]))
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    unsigned long fno, sno;
    gen();
    cin>>t;
    while (t-- > 0)
    {
        cin>>fno>>sno;
        if (fno == 1)
        {
            fno++;
        }
        while (fno <= sno)
        {
            if (process(fno))
            {
                cout<<fno<<endl;
            }
            fno++;
        }
        cout<<endl;
    }
    return 0;
}
