#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, k, a1, b1, sum=0;
    string s, c ;

    cin >> n >> s >> c ;

    for (int i=0; i<n; i++){
        a1 = 10 - abs(s[i] - c[i]) ;
        b1 = abs(s[i] - c[i]);
        if (a1<b1) sum += a1 ;
        else sum += b1 ;
    }
    
    cout << sum ;
}
