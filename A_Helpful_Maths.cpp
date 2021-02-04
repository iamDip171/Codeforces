#include <bits/stdc++.h>

using namespace std ;

int main ()
{
         string ch ;

         cin >>  ch ;

        for (int i=0 ; i<ch.length() ; i+=2 )
        {
                 for (int j=i+2 ; j<ch.length() ; j+=2 )
                 {
                          if (ch[i]>ch[j]) swap (ch[i], ch[j]) ;
                 }
        }

         cout << ch ;

}

