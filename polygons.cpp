#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test, a, b ;

    cin >> test ;

    while (test--){
        cin >> a >> b ;
        
        if (a%b==0) cout << "YES\n" ;
        else cout << "NO\n" ;
    }
}