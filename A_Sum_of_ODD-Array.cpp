#include <bits/stdc++.h>
using namespace std ;
 
int main ()
{
    int n, t, arr[2000], i, sum = 0, even = 0, odd= 0 ;

    cin >> t ;
    while (t--) {
        cin >> n ;
        for (i=0; i<n; i++) {
            cin >> arr[i] ;
            sum += arr[i] ;
            if (arr[i] % 2 == 0) even++ ;
            else odd++ ;
        }
        if (sum % 2 != 0) {
            cout << "YES\n" ;
        } else {
            if (even == n || odd == n) cout << "NO\n" ;
            else cout << "YES\n" ;
        }
        sum = 0 ; even = 0; odd = 0 ;
    }
}