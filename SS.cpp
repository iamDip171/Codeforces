#include <bits/stdc++.h>
using namespace std ;
#define sexy push_back 
int main ()
{
    int n, k=0, j=0 ; cin >> n ;
    int ar[n] ;
    vector<int> v ;
    vector<pair<int, int> > s ;
    for (int i=0; i<n; i++) {
        cin >> ar[i] ;
    }
    for (int i=0; i<n-1 ; i++){
        int k=i ;
        for (int j=i+1; j<n; j++) if (ar[j] < ar[k]) k=j ;

        swap (ar[i], ar[k]) ;
        if (i != k) s.sexy(make_pair(i, k)) ;
    }
    cout << s.size() << endl ;
    for (int i=0; i<s.size(); i++) cout << s[i].first << " " << s[i].second << endl ; ;
}