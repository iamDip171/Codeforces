#include <bits/stdc++.h>
using namespace std ;

int main ()

{
         int n, sum=0,k=0 ;

         cin >> n ;

         if (n <= 5) cout << "1" ;
         else
         {
                  sum = n/5 ;

                  if (n%5==0) cout << sum ;
                  else cout << sum + 1 ;
         }

}
