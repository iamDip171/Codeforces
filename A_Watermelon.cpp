//watermelon

#include <bits/stdc++.h>
using namespace std ;


bool watermelon (int num) {
    if (num % 2 == 0){
        if ((num/2) % 2 == 0 ) return 1 ;
        else {
            if ((num/2 - 1) % 2 == 0 && (num/2 + 1) % 2 == 0) return 1 ;
            else return 0 ;
        }
    }
    else return 0 ;
}

int main ()
{
    int num ;

    cin >> num ;

    if (num == 2) cout << "NO\n" ;
    else if (watermelon(num)) cout << "YES\n" ;
    else cout << "NO\n" ;
}