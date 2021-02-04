#include <bits/stdc++.h>
using namespace std ;

int main ()

{
         int n, o=0, l=0, sum=0 ;

         cin >> n ;

         char s[n] ;

         for (int i=0; i<n; i++)
         {
                  cin >> s[i];
                  if (s[i]=='1' )  l++ ;
                  else o++ ;
         }
         if (l>o) cout << l-o ;
         else cout << o-l ;

}
