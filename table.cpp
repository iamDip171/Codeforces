#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    long long s, e ;
    int k=0 ;
    cin >> s >> e ;

    vector<int> sexy ;

    for (int i=1; i<=s; i++) if (e%i==0) sexy.push_back(i) ;

    for (int i=0; i< sexy.size(); i++){
        for (int j=0 ; j<sexy.size(); j++) if (sexy[i] * sexy[j] == e) k++ ;
    }

    cout << k ;
}
