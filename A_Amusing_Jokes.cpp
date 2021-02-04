#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         string a, b, c, sum  ;
         int j=0 ;
         cin >> a >> b >> c ;

         sum= a+b ;

         sort (sum.begin(), sum.end()) ;

         sort (c.begin(), c.end()) ;

         if (sum==c) cout << "YES" ;
         else cout << "NO" ;
}
