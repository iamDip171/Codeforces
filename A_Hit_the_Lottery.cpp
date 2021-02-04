#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int ar[]= {100,20,10,5,1}, n, i=0, k=0, sum=0;
    cin >> n ;

    while (n!=0) {
        k = n % ar[i] ;
        sum += (n/ar[i]) ;
        n = k ;

        i++ ;
    }

    cout << sum ;
}