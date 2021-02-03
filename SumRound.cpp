#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test; cin >> test ;

    while (test--){
        int n =0 ; vector<int> v ; cin >> n ;
        for (int i=10000; i>=1; i/=10){
            int a = n / i ;
            n %= i ;
            if (a != 0) v.push_back(a*i) ;
        }
        cout << v.size() << endl ;
        for (int i=0; i<v.size(); i++) cout << v[i] << " " ;
        cout << endl ;
    }
}