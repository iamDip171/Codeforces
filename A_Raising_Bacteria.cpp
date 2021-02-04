#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int n, k=1 ;

         cin >>  n ;

         while (n/2!=0){
                  if (n%2==1) k++ ;
                  n /= 2 ;
         }
         cout <<  k;
}
