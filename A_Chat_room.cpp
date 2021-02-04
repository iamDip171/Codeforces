#include <bits/stdc++.h>
using namespace std ;

int main ()
{
         int j=0, check=0 ;
         string s, sum= "hello" ;

         cin >> s ;

         for (int i=0; i<s.length(); i++){
                  if (s[i]== sum[j]){
                           j++ ;
                           check++ ;
                  }
                  if (check==5){
                           cout << "YES" ;
                           return 0 ;
                  }
         }
         cout << "NO" ;
}


