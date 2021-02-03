#include <bits/stdc++.h>
using namespace std ;

void sexy_vabi(int test)
{
    int var = test / 3 ;
    int ans = var/ 12 ;
    int ans1 = var % 12 ;

    if (test % 3 == 2) ans1++ ;
    cout << ans << " " << ans1 ;

}
int main ()
{
    int n ;

    cin >> n ;

    sexy_vabi(n) ;

}