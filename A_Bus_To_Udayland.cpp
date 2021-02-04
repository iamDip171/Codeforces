#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, x=0 ;
    cin >> n ;

    char sit[n][5] ;

    for (int i=0; i<n; i++){
    for (int j=0; j<5; j++) cin >> sit[i][j] ;
    }
    
    for (int i=0; i<n; i++){
       for (int j=0; j<4; j++) {
            if (sit[i][j]=='O' && sit[i][j+1]=='O') {
                x++ ;
                sit[i][j]='+' ;
                sit[i][j+1]='+' ;
                cout << "YES\n" ;
                break ;
            }

        }
        if (x!=0) break ;
    }
    
    if (x==0) {
        cout << "NO\n" ;
    }
    
    else {
        for (int i=0; i<n; i++){
            for (int j=0; j<5; j++) cout << sit[i][j] ;
                cout << endl ;
            }
        }
}

