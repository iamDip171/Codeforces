#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, ser=0, dima=0 ; cin >> n ;
    int ar[n] ;

    for (int i=0; i<n; i++) cin >> ar[i] ;
    int s=0, e = n-1, cot=0 ;
    while (s <= e){
        cot++ ;
        int maxx = max (ar[s], ar[e]) ;

        if (ar[s]> ar[e]) s++ ;
        else e-- ;

        if (cot % 2 != 0) ser += maxx ;
        else dima += maxx ;
    }
    cout << ser << " " << dima ;
}