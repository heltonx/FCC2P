#include <stdio.h>
#include <stdlib.h>

int x , *p ;

int main( ) {
	
	x = 11 ;	
	p = &x ;
	
	printf( "%d" , *p );
	printf( "\n" );
	printf( "%d" , x );

}


