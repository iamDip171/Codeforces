#include <bits/stdc++.h>
using namespace std ;

int main ()

{
    string s, t ;
    int k=0 ;

    getline(cin, s) ;
    
    sort (s.begin(), s.end()) ;
    
    for (int i=0; i<s.length(); i+=1) {
        if (s[i] >= 97 && s[i] <= 122){
            k++ ;
            if (s[i]==s[i+1]) k-- ;
        }

    }
    
    cout << k ;


}
