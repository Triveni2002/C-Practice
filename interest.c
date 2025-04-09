
# include <stdio.h>
# include "inter.h"
int main( )
{

int p, n ;
float si, amt, r ;
printf ( "\nEnter Principal, no. of years and rate of interest: " ) ;
scanf ( "%d %d %f", &p, &n, &r ) ;
si = SI ( p, n, r ) ;
amt = AMT ( si, p ) ;
printf ( "Simple interest is: %f\nAmount is: %f\n", si, amt ) ;
return 0 ;
}

