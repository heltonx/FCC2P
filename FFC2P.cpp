//Franco Francisco e Chicão II, o Programa
//this programa has saveral funcions. A little legend with three heads. Probably I'm mixing C and C++

#include <iostream>
#include<stdio.h>

using namespace std;



int showMemory(){ //This first funciton intends to show the memory addres of a given variable
	
int v; //variavel de escopo local

	printf("digite a variavel: ");
	scanf("%d",&v);
	printf("%d",v);

}

int main(){
	showMemory();

}
