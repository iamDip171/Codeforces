#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int ar[4], k=0 ;

    for (int i=0; i<4; i++) {
        cin >> ar[i] ;
    }
    
    sort (ar, ar+4) ;

    for (int i=0; i<4; i++)
    {
        if (ar[i]== ar[i+1]) k++ ;
    }
    
    cout << k;
}

