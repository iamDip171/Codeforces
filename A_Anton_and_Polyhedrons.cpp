#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int n, a, sum=0 ;
         string s ;

         cin >> n ;

         while (n--)
         {
                  cin >> s ;
                  if (s=="Tetrahedron") a=4 ;
                   if (s=="Cube") a =6 ;
                   if (s=="Octahedron") a =8 ;
                   if (s=="Dodecahedron") a =12 ;
                  if (s=="Icosahedron") a =20 ;

                  sum += a ;
         }
         cout << sum ;
}
