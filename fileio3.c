# include <stdio.h>
# include <string.h>
int main( )
{FILE *fs1, *fs2, *ft ;
char str1[ 80 ], str2[ 80 ] ;
char source1[ 67 ], source2[ 67 ], target[ 67 ] ;
char *ptrch, newl = '\n' ;
int flag = 0 ;
puts ( "Enter source1 file name: " ) ;
gets ( source1 ) ;
puts ( "Enter source2 file name: " ) ;
gets ( source2 ) ;
puts ( "Enter target file name: " ) ;
gets ( target ) ;
fs1 = fopen ( source1, "r" ) ;
if ( fs1 == NULL )
{
puts ( "Unable to open source1" ) ;
exit ( 0 ) ;
}
fs2 = fopen ( source2, "r" ) ;
if ( fs2 == NULL )
{
puts ( "Unable to open source2" ) ;
fclose ( fs2 ) ;
exit ( 0 ) ;
}
ft = fopen ( target, "w+" ) ;
if ( ft == NULL )
{
fclose ( fs1 ) ;
fclose ( fs2 ) ;
puts ( "Unable to create target file" ) ;
exit ( 0 ) ;
}
while ( fgets ( str1, 79, fs1 ) != NULL )
{
ptrch = strchr ( str1, newl ) ;
fputs ( str1, ft ) ;
if ( !ptrch )
fputs ( "\n", ft ) ;
if ( fgets ( str2, 79, fs2 ) != NULL ){
fputs ( str2, ft ) ;
ptrch = strchr ( str2, newl ) ;
flag = 1 ;
if ( !ptrch )
fputs ( "\n", ft ) ;
}
else
fputs ( "\n", ft ) ;
}
if ( flag == 1 )
{
while ( fgets ( str2, 79, fs2 ) != NULL )
{
ptrch = strchr ( str1, newl ) ;
fputs ( str2, ft ) ;
if ( ptrch )
fputs ( "\n", ft ) ;
}
}
printf ( "\nCopying files completed!!\n" ) ;
fclose ( fs1 ) ;
fclose ( fs2 ) ;
fclose ( ft ) ;
return 0 ;
}