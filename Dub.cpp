#include <bits/stdc++.h>
using namespace std ;

void erase(string & s, const string & ab){
    size_t pos = string::npos ;
    while ((pos = s.find(ab)) != string :: npos){
        s.erase(pos, ab.length()) ;
    }
}
int main ()
{
    string s, ch = "WUB";
    int j=0 , col=0 ;
    cin >> s ;
    
    erase (s, "WUB") ;
    
    cout << s ;

}