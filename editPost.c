#include<stdio.h>
#include<stdlib.h>


int infix(char input[]);
int postfix(char input[]);


int infix(char input[]){
	//Now works
	int arr[100],i,size;
	size =0;
	while(input='/0'){
		arr[i]=(int)input[i];
		i++;
	}
	while(arr[i]='/0'){
		printf("%d",arr[i]);
}
}

int postfix(char input[]){
	//Now works
}

void main(){

char input[20];
int choice;	
int history;

printf("Enter the arithmetic string to be evaluated\n");
	scanf("%s",input);

while (choice != 3){
	

	
	printf("\nEnter your choice of Evaluation \n1)PostFix\n2)Prefix\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		infix(input);
		break;
		case 2:
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









