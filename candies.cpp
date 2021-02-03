#include <bits/stdc++.h>
using namespace std ;

int main()
{
    long long t ;

    cin >> t ;

    while(t--) {
        long long  n, sum=1, k=1 ;
        cin >> n ;
        do
        {
            sum += pow(2,k) ;
            k++ ;
        }while ((n%sum)!=0);

        cout << n/sum << endl  ;
    }
}