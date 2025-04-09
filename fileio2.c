# include <stdio.h>
# include <stdlib.h>
# include <ctype.h> /* for prototypes of islower( ), toupper( ) */
int main( )
{
FILE *fs, *ft ;
char ch ;
char source[ 67 ], target[ 67 ] ;
puts ( "Enter source file name: " ) ;
gets ( source ) ;
puts ( "Enter target file name: " ) ;
gets ( target ) ;
fs = fopen ( source, "r" ) ;
if ( fs == NULL )
{
puts ( "Unable to open source file" ) ;
exit ( 0 ) ;
}
ft = fopen ( target, "w" ) ;
if ( ft == NULL )
{
fclose ( fs ) ;
puts ( "Unable to open target file" ) ;
exit ( 0 ) ;
}
while ( ( ch = fgetc ( fs ) ) != EOF )
{
if ( islower ( ch ) )
fputc ( toupper ( ch ), ft ) ;
else
fputc ( ch, ft ) ;
}
printf ( "\nFile copied!!\n" ) ;
fclose ( fs ) ;
fclose ( ft ) ;
return 0 ;
}