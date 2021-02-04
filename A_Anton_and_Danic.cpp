#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int n, a=0, d=0 ;
         char s ;

         cin >>  n ;

         for (int i=0; i<n; i++)
         {
                  cin >> s ;

                  if ( s== 'A' ) a++ ;
                  else d++ ;
         }
         if ( a > d) cout << "Anton" ;
         else if (a < d) cout << "Danik" ;
         else cout << "Friendship" ;
}
