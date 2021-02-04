#include <iostream>
using namespace std ;

int main ()
{
    int n,k, counter=-1 ;
    string ch ;

    cin >> n ;
    for (int i=1;i<=n;i++) {
        cin >> ch ;
        k=ch.length() ;
    //cout << k << endl ;
        if (k>10){
            for (int j=1;j<k;j++) {counter++ ;}
            cout << ch[0] << counter << ch[k-1] << endl ;
            counter = -1 ;
        }
        else cout << ch << endl ;
    }
}
