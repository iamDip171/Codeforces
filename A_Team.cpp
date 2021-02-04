#include <iostream>
using namespace std ;

int main ()
{
    int n, a, b, c, k=0 ;

    cin >> n ;
    for (int i=1;i<=n;i++)
    {
        cin >> a >> b >> c  ;

        if ((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1)){
        if (a==b==c || a==b || b==c || c==a) k++ ; }
       // cout << k << endl ;
    }
    cout << k ;
}
