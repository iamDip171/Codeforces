#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int test; cin >> test ;

    while (test--){
        vector<int> v, v1 ;
        int n, sum=0,j=0, soma=0 ; cin >> n ;

        if (n==2) cout << "NO\n" ;

        else {for (int i=1; i<=n; i++){
            if (i%2==0) {
                sum += i ;
                v.push_back(i) ;
        }
        }
        for (int i=1; i<=(n-2); i++){
            if (i%2 != 0){
                soma += i ;
                v1.push_back(i) ;
            }
        }
        int ssum = sum - soma ; if (ssum%2 != 0) {j=1 ; v1.push_back(ssum) ; }
        if (j==1){
            cout << "YES\n" ;
            for (int i=0; i<v.size(); i++) cout << v[i] << " " ;
            for (int i=0; i<v1.size(); i++) cout << v1[i] << " " ;
            cout << endl ;
        }
        else cout << "NO\n" ;
    }
}
}