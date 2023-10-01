#include<stdio.h>

//CALCULADORA, TIRADA DE https://www.youtube.com/watch?v=ABDPgCf8-OU&list=WL&index=1&t=1s&ab_channel=tutor_SL
// C PURO

void add(int a, int b){
	printf("\nResult : %d", a+b);
}

void substract(int a, int b){
	printf("\nResult : %d", a-b);
}

void mult(int a, int b){
	printf("\nResult : %d", a*b);
}

void divide(int a, int b){
	if(b==0){
		printf("\nCan't divide from Zero!");
	}else{
		printf("\nResult : %d", a/(float)b);
	}

}

int calculator(){
	
	int num1;
	int num2;
	int choice;
	
	printf("Enter number1: ");
	scanf("%d", &num1);
	
	printf("Enter number2: ");
	scanf("%d", &num2);
	
	printf("/n Add - 1\n");
	printf("Substract - 2");
	printf("Multiply - 3");
	printf("Divide - 4");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:add(num1,num2);break;
		case 2:substract(num1,num2);break;
		case 3:mult(num1,num2);break;
		case 4:divide(num1,num2);break;
		default:printf("Invalid Input!\n");		
	}
	
}
