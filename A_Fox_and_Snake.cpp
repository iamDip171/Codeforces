#include <iostream>
using namespace std ;

int main ()
{
    int m,n,k=0,l=0,o=0 ;

    cin >> n >> m ;

    for (int i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            if (i%4==2)
            {
                for (int j=1;j<m;j++) cout << "." ;
                cout << "#\n" ;
            }
            else
            {
                cout << "#" ;
                for (int j=1;j<m;j++) cout << "." ;
                cout << endl ;
            }

        }
        else
        {
            for (int j=1;j<=m;j++) cout << "#" ;
            cout << endl ;
        }

    }


}

