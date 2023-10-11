//Franco Francisco e ChicÃ£o II (pseudo-frankstein), o Programa
//this programa has saveral funcions. A little legend with three heads. Probably I'm mixing C and C++

#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include "calculator.h"

using namespace std ;

int showMemory ( ) { //This first funciton intends to show the memory addres of a given variable
	
int v ; //variavel de escopo local

	printf ( "digite a variavel: " ) ;
	scanf ( "%d" , &v ) ;
	cout << "valor da variavel: " ;
	printf( "%d" , v ) ;
	cout << "\nposicao da variavel na memoria: " ;
	printf ( "%d" , &v ) ;
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

int bubblesort () { //tks professor @aied
	/*
"Compreendi tambÃ©m que o amor de Nosso Senhor se manifesta tanto na alma mais simples, que nÃ£o coloca nenhuma resistÃªncia a sua graÃ§a, quanto na alma mais sublime. Ã‰ prÃ³prio do amor abaixar-se. Se todas as almas se parecessem Ã s dos santos doutores que iluminaram a Igreja com a luz de sua doutrina, parece que Deus nÃ£o teria que se abaixar bastante para vir a seus coraÃ§Ãµes. Mas criou a crianÃ§a, que nada sabe e sÃ³ balbucia fracos gemidos, criou o pobre selvagem, que sÃ³ tem a lei natural para guiÃ¡-lo. E tambÃ©m a seus coraÃ§Ãµes ele se abaixa! [...] Assim se abaixando, Deus mostra sua grandeza infinita."
*/
	
	int vetor_buffer [ 5 ] = { 100 , 9, 200 , 2 , 1 } ; //por enquanto, chumbado
	int aux ;
	
	for (int i = 0 ; i < 5 ; i++ ) {
		for ( int j = 0 ; j < 4 ; j++ ) {
			if (vetor_buffer [ j ] > vetor_buffer [ j + 1 ] ) {
				aux = vetor_buffer [ j ] ;
				vetor_buffer [ j ]  = vetor_buffer [ j + 1 ] ;
				vetor_buffer [j + 1] = aux;
			}
		}
	}
	
	for ( int i = 0; i < 5; i++ ) {
		std::cout << i << " - " << vetor_buffer [ i ] << std::endl ;
	}
	
	return 0 ;
}

int pointers( ) {
	
	int x , *p ;
	
	cout << "Foi declarada uma variavel ( int x ), e um ponteiro ( int * p ) \nobs.: ponteiro foi declarado com o asterisco.";
	
	x = 11 ;	
	p = &x ;
	
	cout << "\n\nLogo apos, foi chumbado um valor para x, e o ponteiro, \nsem o asterisco, recebe o endereco de x, representado por e comercial ( &x ).";
	
	cout << "\n\nPonteiro ( *p ) tem o valor : ";
	printf( "%d" , * p );
	printf( "\n" );
	
	cout << "\n\nVariavel ( x ) tem o valor : ";
	printf( "%d" , x );
	
	cout << "\n\nPonteiro ( p ) aponta para o endereco : ";
	printf( "%d" , p );
	
	cout << "\n\nO endereco de ( x ) eh : ";
	printf( "%d" , p );
}

//BEGINIG OF FATORIAL BLOCK
int fatorial ( int n ) {

	if ( n == 1 || n == 0 )
		return 1;
	return n * fatorial ( n - 1 );
	
}

int main_fatorial ( ){

	cout << " o fatorial de 4 é " << fatorial ( 5 ); //por ora, chumbado
	return 0;

}
//FIM BLOCO DO FATORIAL


int main ( ) {
	
	int choice;

	printf ( " Memory position - option 1\n" ) ;
	printf ( " Otroscopio - option 2\n" ) ;
	printf ( " Calculator - option 3\n" ) ;
	printf ( " Bubble sort - option 4\n" ) ;
	printf ( " Pointers - option 5\n" ) ;
	printf ( " Fatorial - option 6\n" ) ;	
	printf ( "Enter your choice: " ) ;
	
	scanf ( "%d" , &choice ) ;
	
	switch ( choice ) {
	case 1 : showMemory ( ) ; break ; 
	case 2 : otroscopio ( ) ; break ; //tool of human analysis
	case 3 : calculator ( ) ; break ;
	case 4 : bubblesort ( ) ; break ;
	case 5 : pointers ( ) ; break ;
	case 6 : main_fatorial ( ) ; break ;
	default : printf ( "Invalid input \n" ) ;
	}
	
	return 0;
}
