#include <bits/stdc++.h>

using namespace std ;

int main ()
{
         int n, k, l=0 ;

         cin >> n >> k ;

         int ar[n] ;

         for (int i=0; i < n; i++)
         {
                  cin >> ar[i] ;
         }
         for (int j=0; j<n; j++)
         {
                  if (ar[j]>=ar[k-1] && ar[j]>0) l++ ;
         }
         cout << l ;
}
