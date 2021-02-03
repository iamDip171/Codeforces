#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n, k=0 ; cin >> n ;
    string s ; vector<string> vs ;
    getchar() ;
    cout << "OK\n" ;
    for (int i=1; i<=n; i++){
        cin >> s ;
        vs.push_back(s) ;
    }
    for (int i=0; i<vs.size()/2; i++){
        for (int j=i+1; j<vs.size(); j++){
            if (vs[i]==vs[j]){
                k++ ;
                cout << vs[i] << k << endl ; break ;
            }
        }
        cout << "OK\n" ;
}
}