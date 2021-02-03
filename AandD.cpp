#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a, b, c, d, sum=0;

    cin >> a >> b >> c >> d ;

    int minn = min (a, min(c,d)) ;

    sum = minn*256 + min((a-minn),b)*32  ;

    cout << sum ;

}

/*#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a, b, c, d, sum=0 ;

    cin >> a >> b >> c >> d ;

    int minn = min (a,min(c,d)) ;
    for (int i=1; i<= minn; i++){
        sum+= 256 ;
        a-- ;
    } 
    for (int i=1; i<=min(a,b); i++) sum += 32 ;

    cout << sum;
}*/