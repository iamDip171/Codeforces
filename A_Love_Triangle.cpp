#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n, arr[5005], temp[5] ;
    cin >> n ;

    for (int i=0; i<n; i++) cin >> arr[i] ;

    for (int i=0; i<n; i++) {
        temp[0] = arr[i] ;
        for (int j=1; j<4; j++) temp[j] = arr[temp[j-1]-1] ;
        if (temp[0] == temp[3]) {
            cout << "YES\n" ;
            return 0 ;
        }
    }

    cout << "NO\n" ;
    //cout << A << " " << B << " " << C << " " << D;

    //for (int i=0; i<n; i++) cout << i+1 << "-> " << arr[i] << "\n";

}
    