#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
#define MIN 150
int top =-1;
// Two functions of the Evaluation
void infix(char input[]);
//Process statements
//Created on Omjelo
void push(char);
char pop();
//The stack
char stack[MIN];


//Proces definition


void push(char symb){
	if (top>=49){
		printf("\nAnother time Maybe\nStack Overflow\n");
		return;
	}
	else{
		top = top +1;
		stack[top]=symb;
	}
}

char pop(){
	char item;
	if(top==-1){
		printf("\n Lets smile\n Stack Empty");
		return(0);
	}
	else{
		item=stack[top];
		top--;
	}
	return(item);
}

int preced(char ch ){
	if(ch==47){
		return(5);
	}
	else if(ch==42){
		return(4);

	}
	else if(ch==43){
		return(3);
	}
	else
	{
		return(2);
	}
	
}
void postfix(char input){

}



void infix(char input[]){
 	int size;
	int index=0;
	int pos =0;
	char symbol,temp;
	char Jump[MIN];
	size=strlen(input);
	push('#');
	while(index<size){
		symbol = input[index];
		switch(symbol){

			case'(':
			push(symbol);
			break;
		
			case')':
			temp = pop();
			while(temp!= '('){
				Jump[pos]=temp;
				pos++;
				temp=pop();
			}
			break;
			case'+':
			case'-':
			case'*':
			case'/':
			case'^':
			while(preced(stack[top])>=preced(symbol)){
				temp = pop();
				Jump[pos]=temp;
				pos++;
			}
			push(symbol);
			break;
			default:
			Jump[pos++]=symbol;
			break;
		}
		index++;
	}
	while(top>0)
	{
		temp = pop();
		Jump[pos++]=temp;
	}
	Jump[pos++]= '\0';
	puts(Jump);
	return;
}


void main(){

char input[MAX];
int choice;	
int history;

while (choice != 3){
	

	
	printf("Enter your choice of Evaluation \n1)Infix to Postfix\n2)Postfix Evaluation\n3)Jump Out");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("Enter the arithmetic string to be evaluated\n");
		scanf("%s",input);
		printf("Postfix\n");
		infix(input);
		break;
		case 2:
		printf("Prefix\n");
		postfix(input);
		break;
		case 3:
		printf("Exiting The Program\n");
		printf("Do you want the history To remain \n 0 (yes) \n  1 (no) ");
		scanf("%d",&history);
		if(history == 1){				
			system("clear");
			system("cls");
		}
		exit(0);
		
}
}
}









