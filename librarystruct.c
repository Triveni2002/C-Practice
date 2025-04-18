# include <stdio.h>
# include <string.h>
# include <stdlib.h>
void add_book( ) ;
void disp_book( ) ;
void disp_book_auth ( int aut_ano) ;
void sortbyano( ) ;
int sort_function ( const void *f, const void *ff ) ;
void linkfloat( ) ;
struct library
{
char book_title [ 20 ] ;
char author_name [ 20 ] ;
int accno ;
float price ;
int flag ;
} ;
int count ;
struct library book [ 10 ] ;
int main( )
{
int choice ;
while ( 1 )
{
printf ( "\n1. Add book information" ) ;
printf ( "\n2. Display book information" ) ;
printf ( "\n3. List all books of given author" ) ;
printf ( "\n4. List the title of specified book" ) ;
printf ( "\n5. List the count of books in the library" ) ;
printf ( "\n6. List the books in order of accession number" ) ;
printf ( "\n7. Exit" ) ;
printf ( "\nYour choice? " ) ;
scanf ( "%d", &choice ) ;
switch ( choice )
{
case 1 :

add_book( ) ;
break ;
case 2 :

disp_book( ) ;
break ;
case 3 :

disp_book_auth ( 0 ) ;
break ;
case 4 :

disp_book_auth ( 1 ) ;
break ;
case 5 :

printf ( "\nTotal number of books = %d", count ) ;
break ;
case 6 :

sortbyano( ) ;
break ;
case 7 :
exit ( 0 ) ;
}
}
return 0 ;
}

void add_book( )
{
if ( count == 9 )
{
printf ( "\nNo more space" ) ;
return ;
}
printf ( "\nEnter the details of the book" ) ;
printf ( "\nName of the book: " ) ;
scanf ( "%s", book[ count ].book_title ) ;
printf ( "\nName of the author: " ) ;
scanf ( "%s", book[ count ].author_name ) ;
printf ( "\nAccession number of the book: " ) ;
scanf ( "%d", &book[ count ].accno ) ;
printf ( "\nPrice of the book: " ) ;
scanf ( "%f", &book[ count ].price ) ;
printf ( "\nIssued / Not Issued ( 0/1 ) : " ) ;
scanf ( "%d", &book[ count ].flag ) ;
if ( ( book[ count ].flag != 0 ) && ( book[ count ].flag != 1 ) )
{
printf ( "\nImproper Status" ) ;
return ;
}
count++ ;
printf ( "\nBook details entered" ) ;
}

void disp_book( )
{
int i ;
printf ( "\nDetails of %d books in the library: ", count ) ;
for ( i = 0 ; i < count ; i++ )
{
printf ( "\nName of the book: %s", book[ i ].book_title ) ;
printf ( "\nName of author: %s", book[ i ].author_name ) ;
printf ( "\nAccession number: %d", book[ i ].accno ) ;
printf ( "\nPrice of the book: %f", book[ i ].price ) ;
printf ( "\nStatus of the book: " ) ;
book[ i ].flag == 0 ? printf ( "Issued" ) : printf ( "Available" ) ;
printf ( "\n\n" ) ;
}
}

void disp_book_auth ( int aut_ano )
{
char nm [ 20 ] ;
int accno;
int i = 0 ;
int dec = 0 ;

if ( aut_ano == 0 )
{
printf ( "\nEnter the name of the author : " ) ;
scanf ( "%s", nm ) ;
printf ( "\nDetails of books by author %s in library: ", nm ) ;
}
else
{
    printf ( "\nEnter the accession number of the book : " ) ;
scanf ( "%d", &accno ) ;
printf ( "\nDetails of books with accession no %d: ", accno ) ;
}
for ( i = 0 ; i < count ; i++ )
{
if ( ( strcmp ( nm, book[ i ].author_name ) == 0 ) &&
( aut_ano == 0 ) )
dec++ ;
else
{
if ( aut_ano == 1 )
{
if ( book[ i ].accno == accno )
dec++ ;
else
continue ;
}
else
break ;
}
printf ( "\nName of the book: %s", book[ i ].book_title ) ;
printf ( "\nName of author: %s", book[ i ].author_name ) ;
printf ( "\nAccession num of book: %d", book[ i ].accno ) ;
printf ( "\nPrice of the book: %f", book[ i ].price ) ;
printf ( "\nStatus of the book: " ) ;
book[ i ].flag == 0 ? printf ( "Issued" ) : printf ( "Available" ) ;
printf ( "\n\n" ) ;
}
if ( dec == 0 )
printf ( "\nNo such book" ) ;
}

void sortbyano( )
{
qsort ( ( struct library * ) book, count, sizeof ( book[ 0 ] ),
sort_function ) ;
printf ( "\nAfter sorting by accession number " ) ;
disp_book ( ) ;
}
int sort_function ( const void *f, const void *ff ){
return ( ( ( struct library *) f ) -> accno -
( ( struct library * ) ff ) -> accno ) ;
}
void linkfloat( )
{
float a = 0, *b ;
b = &a ;
a = *b ;
}
