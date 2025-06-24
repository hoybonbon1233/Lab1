#include <stdio.h>
int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ;
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &Age ) ;
    printf( "Hello" ) ;
    printf( "%s\n", Name ) ; 
    printf( "Age = %d\n", Age ) ; 
    return 0 ;
}//end main function
