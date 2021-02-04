#include <bits/stdc++.h>
using namespace std ;

int main ()

{
         int n, sum=0 ;
         cin >> n ;
         int ar[n], a[n] ;

         for (int i=0; i<n; i++){
                  cin >> ar[i] ;
         }
         sort (ar, ar+n) ;

         for (int i=0; i<n;i++){
                  a[i] = abs(ar[i]  -  ar[n-1]) ;
                  sum += a[i] ;
         }
         cout << sum ;
}
