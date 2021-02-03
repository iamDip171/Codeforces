#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test; cin >> test ;
    while (test--){
        long long int n, k ; cin >> n >> k ;
        vector <long long int> v ;

        for (long long int i=0 ; i<= k*2 ; i++){
            if ((i+1) % n != 0 ) v.push_back(i+1) ;
        }
        cout << v[k-1] << endl ;
    }
}