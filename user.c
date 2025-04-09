#include <stdio.h>

int main(){
    int pos, neg, zero, num ;
char ans = 'y' ;
pos = neg = zero = 0 ;
while ( ans == 'y' || ans == 'Y' )
{
printf ( "\nEnter a number: " ) ;
scanf ( "%d", &num ) ;
if ( num == 0 )
zero++ ;
if ( num > 0 )
pos++ ;
if ( num < 0 )
    neg++ ;
fflush ( stdin ) ; // clears standard input stream
printf ( "\nDo you want to continue? " ) ;
scanf ( "%c", &ans ) ;
}
printf ( "You entered %d positive number(s)\n", pos ) ;
printf ( "You entered %d negative number(s)\n", neg ) ;
printf ( "You entered %d zero(s)\n", zero ) ;
return 0 ;
}