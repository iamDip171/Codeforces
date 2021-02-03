#include <bits/stdc++.h>
using namespace std ;
void erase (string &s, const string &c){
    size_t p = string :: npos ;
    while ((p = s.find(c)) != string :: npos){
        s.erase(p, c.length()) ;
    }
}
int main ()
{
    int c = 0 ;
    string s ;
    char ch[10] ;

    while (1){
        cin >> ch >> s ;
        if (ch[0]=='0' && s[0]=='0') break ;
        erase (s, ch) ;
        if (s=="\0" || s[0]=='0') cout << "0\n" ; 
        else cout << s << endl ;
        
    }
}