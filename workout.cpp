#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ; cin >> n ;
    int test[n], chest=0, biceps=0, back=0 ;

    for (int i=0; i<n; i++)
        cin >> test[i] ;
        
    for (int i=0; i<n; i++){
        if (i%3==0) chest += test[i] ;
        if (i%3==1) biceps += test[i] ;
        if (i%3==2) back += test[i] ; 
    }
    if (chest > biceps && chest > back) cout << "chest" ;
    else if (biceps > back) cout << "biceps" ;
    else cout << "back" ;
}