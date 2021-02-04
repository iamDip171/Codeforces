#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         string s ;
         int k=0, l=0 ;

         cin >> s ;

         for (int i=0; i<s.length(); i++)
         {
                  if (s[i]>=65 && s[i]<=90) k++ ;
                  else l++ ;
         }

         for (int i=0; i<s.length(); i++){
                  if (k<=l) putchar(tolower(s[i])) ;
                  else putchar( toupper(s[i]) ) ;
         }

}
