#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    char str[1000];
    stack <char> s;
    while (t--)
    {
        cin>>str;
        int l = strlen(str);

        for(int i=0;i<l;i++ )
        {
            if(isalpha(str[i]))
                cout << str[i];
            else if(str[i] == ')' )
            {
                cout << s.top ();
                s.pop ();
            }

            else if (str[i] != '(' )
                s.push (str[i]);
        }

        cout << endl;
    }

    return 0;
}
