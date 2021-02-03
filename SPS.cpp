#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test; cin >> test ;

    while (test--){
        int sum, baal, ans, carry ; cin >> sum >> baal ;
        
        if (sum % baal == 0) {
            cout << "YES\n" ;
            for (int i=1; i<=baal; i++) cout << sum/baal << " " ;
        }
        
        else{
        ans = (sum / baal) + (sum % baal) ;
        carry = sum - ans ;
        if (carry % baal-- == 0) 
        }
        
    }
}