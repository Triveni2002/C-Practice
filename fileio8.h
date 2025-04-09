# include <stdio.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
int main( )
{
FILE *fp ;
char name[ 21 ], ch, another = 'y' ;
int num, n ;
fp = fopen ( "student.dat", "w+" ) ;
if ( fp == NULL )
{
puts ( "Unable to create file\n" ) ;
exit ( 1 ) ;
}
while ( another == 'y' || another == 'Y' )
{
puts ( "\nEnter the name of student: " ) ;
scanf("%[^\n]s",name);
fputs ( name, fp ) ; 
fputs ( "\n", fp ) ; 
puts ( "Do you want to add more names y/n" ) ;
fflush ( stdin ) ;
another = getch( ) ;
}
fseek ( fp, 0L, SEEK_SET ) ; 
puts ( "\nEnter any number from the list" ) ;
scanf ( "%d", &num ) ;
n = num ;
while ( fgets ( name, 21, fp ) != NULL )
{
num-- ; 
if ( num == 0 )
printf ( "\nName of student no. %d is: %s\n", n, name ) ;
}
if ( num > 0 )
puts ( "No such number exists in the list\n" ) ;
fseek ( fp, 0L, SEEK_SET ) ; 
puts ( "\nList of students whose name starts with S: " ) ;
while ( fgets ( name, 21, fp ) != NULL )
{if ( name[ 0 ] == 's' || name[ 0 ] == 'S' )
printf ( "%s", name ) ;
}
fclose ( fp ) ;
return 0 ;
}