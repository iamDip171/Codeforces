#include <iostream>
using namespace std ;

int main ()
{
    string ch ;
    cin >> ch ;
    char a[100] ;
    int k=0 ;

    for (int i=0;i<ch.length();i++){
        if (ch[i]!='a' &&ch[i]!='A' && ch[i]!='e' && ch[i]!='E' && ch[i]!='i' && ch[i]!='I' && ch[i]!='o' && ch[i]!='O' && ch[i]!='u' && ch[i]!='U' && ch[i]!='Y' && ch[i]!='y') {
            a[i]=ch[i] ;
            if (a[i]>=65 && a[i]<=90) a[i] = a[i] + 32 ;
            cout << "." << a[i] ;
        }
    }
}

