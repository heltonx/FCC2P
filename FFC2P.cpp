//Franco Francisco e Chicão II (pseudo-frankstein), o Programa
//this programa has saveral funcions. A little legend with three heads. Probably I'm mixing C and C++

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std ;

int showMemory(){ //This first funciton intends to show the memory addres of a given variable
	
int v; //variavel de escopo local

	printf("digite a variavel: ");
	scanf("%d",&v);
	cout << "valor da variavel: ";
	printf("%d",v);
	cout << "\nposicao da variavel na memoria: ";
	printf("%d",&v);
}

int otroscopio(){
	
	struct dados{
		char face[10];
		string body;
		string persona;
		string style;
	};
	
	struct dados pessoa;
	
	printf("type face: ");
	scanf("%s",&pessoa.face);
	printf("type body: ");
	scanf("%s",&pessoa.body);
	printf("type persona: ");
	scanf("%s",&pessoa.persona);
	printf("type clothing/style: ");
	scanf("%s",&pessoa.style);
	
	printf("a pessoa tem a face %s",pessoa.face);
}


int calculator ( ) { //na proxima ver como colocar a funcao calculadora em outro arquivo, como se fosse um modulo
	
	int choice; 
	int num1; 
	int num2 ;
	void add(int a, int b);
	
	printf("Enter number1: ");
	scanf("%d", &num1);
	
	printf("Enter number2: ");
	scanf("%d", &num2);
	
	
	printf ( " ADD - option 1\n" ) ;
	printf ( "Enter your choice: " ) ;
	scanf ( "%d" , &choice ) ;
	
	switch ( choice ) {
		case 1 : add ( num1, num2 ) ; break ; 
		default : printf ( "Invalid input \n" ) ;
	
}

}

void add ( int a , int b ) {
	
	printf ( "\nResult : %d" , a + b ) ;
}

int main(){
	
	int choice;

	
	printf ( " Memory position - option 1\n" ) ;
	printf ( " Otroscopio - option 2\n" ) ;
	printf ( " Calculator - option 3\n" ) ;
	printf ( "Enter your choice: " ) ;
	
	scanf ( "%d" , &choice ) ;
	
	switch ( choice ) {
	case 1 : showMemory ( ) ; break ; 
	case 2 : otroscopio ( ) ; break ; //tool of human analysis
	case 3 : calculator ( ) ; break ;
	default : printf ( "Invalid input \n" ) ;
	}
	
}
