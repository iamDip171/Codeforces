#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         long long int n, k=0,a  ;

         cin >> n ;

         while (n !=0)
         {
                  a = n%10 ;
                  n/=10 ;
                  if (a==4 || a==7) k++ ;
         }
         if (k==4 || k==7) cout << "YES" ;
         else cout << "NO" ;
}
