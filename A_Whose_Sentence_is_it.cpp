#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    string s, s2 = "lala.", s1= "miao." ;
    int n ;

    cin >> n ;
    getchar() ;

    while (n--){
        int col1=0, col2=0 ;
        getline (cin,s) ;
        int m= s.length() ;
        if (s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.'){
            col1=1 ;
        }
        if (s[m-1]=='.' && s[m-2]=='a' && s[m-3]=='l' && s[m-4]=='a' && s[m-5]=='l'){
            col2=1 ;
        }

        if (col1==col2) cout << "OMG>.< I don't know!\n" ;
        else if (col1==1) cout << "Rainbow's\n" ;
        else if (col2==1) cout << "Freda's\n" ;
        else cout << "OMG>.< I don't know!\n" ;
         
    }

    
}