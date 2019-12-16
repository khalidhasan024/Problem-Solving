#include<bits/stdc++.h>
using namespace std ;

int main( )
{
    int a , b , c ;
    while ( cin >> a>> b >> c )
    {
        if( a == b && a != c )
            cout << "C\n" ;
        else if( b == c && c != a )
            cout << 'A' << endl ;
        else if( a == c && b != c )
            cout << "B" << endl ;
        else
            cout << "*" << endl;

    }

    return 0 ;
}