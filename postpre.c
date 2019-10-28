#include<stdio.h>
#include<stdlib.h>
#define MAX 100


// Two functions of the Evaluation
void postfix(char input);
void infix(char input);


void postfix(char input){
	printf("%s",input);
	printf("It works");
}



void infix(char input){
 	printf("%s",input);
	printf("It works");
}






void main(){

char input[MAX];
int choice;	
int history;

printf("Enter the arithmetic string to be evaluated\n");
	scanf("%s",input);

while (choice != 3){
	

	
	printf("Enter your choice of Evaluation \n1)PostFix\n2)Prefix\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("Postfix\n");
		postfix(input[MAX]);
		break;
		case 2:
		printf("Prefix\n");
		infix(input[MAX]);
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









