#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test; cin >> test ;

    while (test--){
        long long int n, m ; cin >> n >> m ;

        if (n==1) cout << "0\n" ;
        else if (n==2) cout << m << "\n" ;
        else cout << 2 * m << "\n" ;
    }
}