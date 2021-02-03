#include <bits/stdc++.h>
using namespace std ;

void minutes_bol_shala(int x, int y)
{
    int baal = x*60 + y ;

    cout << 1440 - baal ;
}

int main ()
{
    int t, a, b ;
    cin >> t ;
    while (t--){
        cin >> a >> b ;
        minutes_bol_shala(a,b) ;
        cout << endl ;
    }
}