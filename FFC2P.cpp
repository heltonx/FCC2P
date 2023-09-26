//Franco Francisco e Chicão II (a frankstein with three heads), o Programa
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

int main(){
	int choice;
	
	printf(" Memory position - option 1\n");
	printf(" Otroscopio - option 2\n");
	printf("Enter your choice: ");
	
	scanf("%d",&choice);
	
	switch(choice){
	case 1:showMemory();break;
	case 2: otroscopio();break; //tool of human analysis
	default: printf("Invalid input \n");
	}
	
}
