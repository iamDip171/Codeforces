#include <bits/stdc++.h>
using namespace std ;

int main ()

{
         int a, b, suma=1, sumb=1 , k=1;

         cin >> a >> b ;

         suma = a*3 ;
         sumb= b*2 ;

         for (int i=1 ; ;i++)
         {
                  if (suma<=sumb) k++ ;
                  else break ;
                  suma*=3 ;
                  sumb*=2 ;


         }
         cout << k ;

}
