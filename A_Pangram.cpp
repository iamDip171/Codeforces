#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int n, j=0, check=0 ;
         string s, sum= "abcdefghijklmnopqrstuvwxyz" ;

         cin >> n >> s ;

         for (int i=0; i<s.length() ; i++){
                  if (s[i]>=65 && s[i]<=90) s[i]= s[i] +32 ;
         }
         sort (s.begin(), s.end()) ;

         for (int i=0; i<s.length(); i++){
                  if (s[i]== sum[j]){
                           j++ ;
                           check++ ;
                  }
                  if (check==26){
                           cout << "YES" ;
                           return 0 ;
                  }
         }
         cout << "NO" ;
}
