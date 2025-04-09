

# include <stdio.h>
struct stud
{
int r_n ; 
char name[ 20 ] ; 
char dep[ 15 ] ; 
char course[ 10 ] ; 
int y_o_j ; 
} ;
struct stud s[ 450 ] ; 
void set_student_data( ) ;
void display( ) ;
void name_acc_year ( int ) ;
void data_acc_rollno ( int ) ;
int main( )
{
int i, r ;
int y ;
printf ( "\nEnter the data for each Student:\n\n " ) ;

set_student_data( ) ;
/* Display all the elements of the student structure */
display( ) ;
printf ( "\nEnter the Year of Joining of the Student " ) ;
scanf ( "%d", &y ) ;
name_acc_year ( y ) ;
/* Search data based on roll number */
printf ( "\nEnter the Roll Number of the Student" ) ;
scanf ( "%d", &r ) ;
data_acc_rollno ( r ) ; /* roll number passed to function */
return 0 ;
}
void set_student_data( ) /* Enter student data */
{
int i ;
for ( i = 0 ; i < 450 ; i++ )
{
fflush ( stdin ) ; /* Flush the input buffer */
printf ( "\nEnter the Roll NUmber of the student\n" ) ;
scanf ( "%d", &s[ i ].r_n ) ;
fflush ( stdin ) ;
printf ( "Enter the name of the student\n" ) ;
scanf ( "%s", s[ i ].name ) ;
fflush ( stdin ) ;
printf ( "Enter the name of the Department\n" ) ;
scanf ( "%s", s[ i ].dep ) ;
fflush ( stdin ) ;
printf ( "Enter the name of the Course\n" ) ;
scanf ( "%s", s[ i ].course ) ;
fflush ( stdin ) ;
printf ( "Enter the Year of Joining of the student\n" ) ;
scanf ( "%d", &s[ i ].y_o_j ) ;
}
}
/* function to display data */
void display( )
{
int i ;
for ( i = 0 ; i < 450 ; i++ )
{
printf ( "\nRoll Number %d = %d \n", i+1 , s[ i ].r_n ) ;
printf ( "\nName of student %d = %s \n", i+1, s[ i ].name ) ;
printf ( "\nName of the Department = %s \n", s[ i ].dep ) ;
printf ( "\nName of the Course = %s \n", s[ i ].course ) ;

printf ( "\nYear of Joining %d = %d \n\n", i+1 , s[ i ].y_o_j ) ;
}
}

void name_acc_year ( int y )
{
int i, j = 0 ;
for ( i = 0 ; i < 450 ; i++ )
{
if ( y == s[ i ].y_o_j )
{
printf ( "%s joined in the year %d\n", s[ i ].name,
s[ i ].y_o_j ) ;
j = 1 ;
}
}
if ( j == 0 )
printf ( "\nNo student joined in the year %d", y ) ;
}

void data_acc_rollno ( int r )
{
int i, j = 0 ;
for ( i = 0 ; i < 450 ; i++ )
{
if ( s[ i ].r_n == r )
{
printf ( "\n\tRoll Number of student = %d \n", s[ i ].r_n ) ;
printf ( "\n\tName of student = %s \n", s[ i ].name ) ;
printf ( "\n\tDepartment = %s \n", s[ i ].dep ) ;
printf ( "\n\tName of the Course = %s \n", s[ i ].course ) ;
printf ( "\n\tYear of Joining = %d \n\n", s[ i ].y_o_j ) ;
j = 1 ;
}
}
if ( j == 0 )
printf ( "\nNo such Roll Number present." ) ;
}
