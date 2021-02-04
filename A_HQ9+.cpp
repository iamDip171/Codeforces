#include <bits/stdc++.h>

using namespace std ;

int main ()

{
         string s ;

         int k=0 ;

         cin >> s ;

         for (int i=0; i < s.length(); i++)
         {
                  if (s[i]=='H' || s[i]=='Q' || s[i]=='9')  k++ ;
         }
         if (k!=0) cout << "YES" ;
         else cout << "NO" ;

}
