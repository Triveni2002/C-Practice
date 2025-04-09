# include <stdio.h>
int main( )
{
int arr[ 3 ][ 3 ], i, j, count = 0 ;
printf ( "\nEnter the elements of the Matrix:\n" ) ;
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
scanf ( "%d", &arr[ i ][ j ] ) ;
}
printf ( "\nThe matrix formed is....\n" ) ;
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )printf ( "%d ", arr[ i ][ j ] ) ;
printf ( "\n" ) ;
}
/* Check for symmetry */
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = i ; j <= 2 ; j++ )
{
if ( arr[ i ][ j ] == arr[ j ][ i ] )
count++ ;
}
}
if ( count == 6 )
printf ( "\n\nThe matrix is symmetric\n" ) ;
else
printf ( "\n\nThe matrix is not symmetric\n" ) ;
return 0 ;
}