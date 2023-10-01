/*
A .h file, also known as a header file, contains function prototypes and declarations. 
It serves as an interface for other source files to access the functions defined in a 
corresponding .cpp or .c file with the same name. Including a header file in source files is 
crucial for code organization and modularity, enabling the separation of function declarations
from implementations and allowing different parts of a program to work together seamlessly and efficiently.
*/


#ifndef CALCULATOR_H
#define CALCULATOR_H

void add ( int a , int b ) ;
void substract ( int a, int b ) ;
void mult ( int a, int b ) ;
void divide ( int a, int b ) ;
int calculator ( ) ;

#endif

