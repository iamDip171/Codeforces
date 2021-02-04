#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, k=1, ans= 1 ;
    cin >> n ;
    int ar[n] ;

    for (int i=0; i<n; i++) cin >> ar[i] ;

    for (int i=1; i<n; i++) {
        if (ar[i] > ar[i-1]) {
            k++ ;
        }
        else {
            k=1 ;
        }
        ans = max(k,ans) ;
    }
    cout << ans ;
}
