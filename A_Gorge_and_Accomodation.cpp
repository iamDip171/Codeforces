#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int n , a, b , k=0 ;

         cin >> n ;

         for (int i=1; i<=n ; i++)
         {
                  cin >> a >>  b ;

                  if ((b-a)!=1 && (b-a)!=0 ) k++ ;
         }
         cout << k ;
}
