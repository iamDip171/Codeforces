#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         string s, t ;

         cin >> s >> t ;
         int k =0, j= t.length() - 1 ;

         for (int i=0; i<s.length(); i++)
         {
                  if (s[i]==t[j]) k++ ;
                  j-- ;
         }
         if (k==s.length()) cout << "YES" ;
         else cout << "NO" ;
}
