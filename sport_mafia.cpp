#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int eat = 0 , sum = 1, n, k, count = 1, i =1 ;

    cin >> n >> k ;

    while (1) {
        if (sum >= k && (n-i == sum - k)) {
            eat = sum - k ; break ;
        }
        else {
            sum += ++count ;
            i++ ;
        }
    }

    cout << eat ;
}
