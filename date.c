#include <stdio.h>
#include <stdlib.h>
int main( )
{
struct date
{
unsigned day : 5 ;
unsigned month : 4 ;
unsigned year : 12 ;
} ;
struct date dt[ 10 ], temp ;
int i, j, d, m, y ;
printf ( "Enter joining dates (dd-mm-yyyy) of 10 employees\n" ) ;
for ( i = 0 ; i < 10 ; i++ )
{
scanf ( "%d %d %d", &d, &m, &y ) ;
if ( d < 1 || d > 31 || m < 1 || m > 12 )
{
printf ( "Invalid date, enter new date\n" ) ;
i-- ;
continue ;
}
dt[ i ].day = d ;dt[ i ].month = m ;
dt[ i ].year = y ;
}
for ( i = 0 ; i < 9 ; i++ )
{
for ( j = i + 1 ; j < 10 ; j++ )
{
if ( dt[ j ].year < dt[ i ].year )
{
temp = dt[ i ] ;
dt[ i ] = dt[ j ] ;
dt[ j ] = temp ;
}
}
}
for ( i = 0 ; i < 10 ; i++ )
printf ( "%d %d %d\n", dt[ i ].day, dt[ i ].month, dt[ i ].year ) ;
return 0 ;
}