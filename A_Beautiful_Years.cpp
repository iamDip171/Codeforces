#include <bits/stdc++.h>
using namespace std ;

bool checkyear(string s){
         sort (s.begin(), s.end()) ;

         for (int i=0; i<s.length(); i++){
                  if (s[i]==s[i+1]) return false ;
         }
         return true ;
}
int main ()
{
         int n ;
         string c ;
         cin >> n ;
         for (int i=n+1; i>=1000; i++) {
                  c= to_string (i) ;
                  if (checkyear(c)){
                           cout << c ;
                           return 0 ;
                  }
         }
}
