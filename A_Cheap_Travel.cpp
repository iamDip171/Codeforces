#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n, m, a, b, sum = 0 ;

    cin >> n >> m >> a >> b ;

    if ((int)(b/m) < a) {
        for (int i=1; i<= n/m; i++) sum += b ;
        if ((n - (m * (int)(n/m))) > 0) {
            if ((n - (m * (int)(n/m))) * a < b) {
                sum += (n - (m * (int)(n/m))) * a ;
            }
            else sum += b ;
        }
    }   
    else {
        sum = n*a ;
    }

    cout << sum ;

}