#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k=0, l=2, sum = 1 ;
    cin >> n ;
    
    while(sum<=n)
    {
        for(int i=1; i<=l; i++)
        {
            sum = sum + i ;
        }
        l++ ;
        k++ ;
    }
    
    cout << k ;
}
