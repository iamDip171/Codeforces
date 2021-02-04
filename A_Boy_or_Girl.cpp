#include <iostream>
#include <algorithm>
using namespace std ;

int main ()
{
    string ch ;
    int co=0 ;
    cin >> ch ;
    int k= ch.length();

    sort (ch.begin(),ch.end()) ;

    for (int i=1;i<k;i++){
            if (ch[i]!=ch[i-1]) co++ ;
        }


    if ((co+1)%2==0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!" ;
}
