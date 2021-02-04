#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n, sum=0, soma=0 ; cin >> n;
    vector<int> v ;
    while (n--){
        int a ;
        cin >> a ;
        for (int i=1; i<=a; i++){
            v.push_back(pow(2,i)) ;
        }
        //for (int i=0; i<v.size(); i++) cout << v[i] << " " ; 
        int b = a/2 ;

        for (int i=0; i<b-1; i++) sum += v[i] ;
        sum += v[a-1] ;
        for (int i=b-1; i<a-1; i++) soma += v[i] ;

        cout << abs(sum-soma) << endl ;
        v.clear() ; sum=0; soma=0 ;
    }
}