#include<bits/stdc++.h>
using namespace std ;

int main( )
{
    int n , m ;
    while( cin >> n >> m )
    {
        bool ar[ n + 1 ] ;
        memset( ar, 0 ,sizeof( ar ) ) ;
        for( int i = 0 ; i < m ; i++ )
        {
            int in ;
            cin >> in ;
            ar[ in ] = true ;
        }
        bool ok = true ;
        for( int i = 1 ; i <= n ; i++ ){
            if( ar[ i ] == false ){
            cout << i << " " ;
            ok = false ;
            }
        }
        if( ok == true )
            cout << "*" ;
        cout << "\n" ;
    }

    return 0 ;
}