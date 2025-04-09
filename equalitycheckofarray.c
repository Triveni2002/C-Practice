# include <stdio.h>
int main( )
{
int arr[ 10 ], i, j ;
printf ( "\nEnter 10 elements of array:\n" ) ;
for ( i = 0 ; i <= 9 ; i++ )
scanf ( "%d", &arr[ i ] ) ;
for ( i = 0 ; i <= 4 ; i++ ){
printf ( "arr[%d] and arr[%d] are ", i, 10 - ( i + 1 )) ;
if ( arr[ i ] == arr[ 10 - ( i + 1 ) ] )
printf ( "equal\n" ) ;
else
printf ( "unequal\n" ) ;
}
return 0 ;
}