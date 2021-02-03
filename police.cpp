#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, k=0, sum=0 ;
    cin >> n;
    int ar[n] ;

    for (int i=0; i<n; i++) cin >> ar[i] ;

    for (int i=0; i<n; i++) {
        if (ar[i]>0) sum +=ar[i] ;
        
        else if (sum>0) sum-- ;

        else k++ ;
    }
    cout << k ;
}