#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n , a, b,m=0, c=0 ;

    cin >> n ;

    while (n--){
        cin >> a >> b ;

        if (a<b)  c++ ;
        else if (a>b) m++ ;
    }
    
    if (c>m) cout << "Chris" ;
    else if (c<m) cout << "Mishka" ;
    else cout << "Friendship is magic!^^" ;
}
