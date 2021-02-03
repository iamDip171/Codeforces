#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, i=1 ; cin >> n ;
    int x, k, test, ans = 0 ;
    while (n--){
        cin >> x >> k ;
        int num = k ;
        while (x--){
            cin >> test ;
            if (test != num) num = k ;
            if (test == num) {
                num-- ;
                if (num == 0) {
                    ans ++ ; num = k ;
            }
            
        }
        }
        cout << "Case #" << i++ <<": " << ans << endl ;
        ans = 0 ; }
}
    