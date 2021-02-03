#include <bits/stdc++.h>
using namespace std ;

void findYes (int n) {
    if ( n <= (n/2020 + (n/2020)*2020) && n >= (n/2020)*2020) cout << "Yes\n" ;
    else cout << "No\n" ;
}

int main() {
    int n, year ;

    cin >> n ;

    while (n--) {
        cin >> year ;
        findYes(year) ;
    }
}