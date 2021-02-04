#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=1 ;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            k ++ ;
            if (k == 7)
            {
                cout << "YES" ;
                return 0 ;
            }
        }
        else k = 1;
    }
    cout << "NO" ;

}
