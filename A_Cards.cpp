#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, z=0, o=0 ;
    cin >> n ;
    char s[n] ;
    
    for (int i=0 ; i < n; i++) cin >> s[i] ;

    for (int i=0 ; i < n; i++){
        if (s[i]=='z') z++ ;
        if (s[i]=='n') o++ ;
    }

    for (int i=0; i<o; i++) cout << "1 " ;
    for (int i=0; i<z; i++) cout << "0 " ;
    

    

}