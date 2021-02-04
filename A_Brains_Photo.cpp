#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int n, m ;
         cin >> n >> m ;
         char c[n][m] ;

         for (int i=0; i<n; i++){
                  for (int j=0; j<m; j++){
                           cin >> c[i][j] ;
                  }
         }
         for (int i=0; i<n; i++){
                  for (int j=0 ; j<m; j++){
                           if ( c[i][j]== 'C' || c[i][j]== 'M' || c[i][j]== 'Y')
                           {
                                    cout << "#Color" ;
                                    return 0 ;
                           }
                  }
         }
         cout << "#Black&White" ;
}
