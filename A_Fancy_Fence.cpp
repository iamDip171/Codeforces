#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, x ;

    cin >> n;

    while (n--)
    {
        cin >> x ;
        if ((360%(180-x))==0) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}
