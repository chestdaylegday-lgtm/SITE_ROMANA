#include <iostream>
#include <cmath>
using namespace std ;
int n , m , a[101][101], s , maxi = 0 ;
bool prim( int x )
{
    if( x < 2 ) return 0 ;
    if( x == 2 ) return 1 ;
    if( x % 2 == 0 ) return 0 ;
    for( int d = 3 ; d * d <= x ; d = d + 2 )
        if( x % d == 0 ) return 0 ;
    return 1;

}
int main()
{
    cin >> n >> m ;
    for( int i = 1 ; i <= n ; ++ i )
        for( int j = 1 ; j <= m ; ++ j )
        cin >> a[i][j] ;

        for( int i = 1 ; i <= n ; ++ i )
        {

            if( i % 2 == 0 )
            for( int j = 1 ; j <= m ; ++ j )
            {
                if(prim(a[i][j])== 1 )s++;
            }


        }
        cout << s ;

}
