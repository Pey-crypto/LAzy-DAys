#include<stdio.h>
#include<stdlib.h>
#define MAX  40
int circ[MAX];
int main();
int size;
int top;




int Enqu();

int Dequ();




int Enqu(){
    int top,rear,i;
    printf("\nEntered The Function\n");
    printf("\nEnter the Size of the queue\n");
    scanf("%d",&size);
    top = size;
    if(size>MAX){
        printf("\nInvalid Size input\n");
        printf("\nInput:\t");
        scanf("%d",&size);
    }
    rear = 0;
    printf("\nEnqueue operation\n");
    for(i=0;i<size;i++){

        printf("\n Enter the %i element\n",i);
        scanf("%d",&circ[rear]);
        rear++;
        
        
    }
    if(top == rear){

        printf("\n Queue filled\n");
        top = 0;
        rear = 0;
        main();
    }
}

int Dequ(){
    int i,luke;
    printf("\nEntered the Function\n");
    printf("\n These are the elements that are present in the queue\n");
    for(i = 0;i<size;i++){
        printf("\n%d\n",circ[i]);
    }

    
    printf("\nDo you want to dequeue\n");
    printf("\nHow many element\n");
    scanf("%d",&luke);
    top = 0;
    for(i =0;i<luke;i++){
        top++;
    }
    printf("\nThe elements are\n");
    for(i = top;i<size;i++){
        printf("\n%d\n",circ[i]);
    }
}



int main(){

printf("\nThis runs on a circular queue\n");

int choice;

printf("\nEnter your size\n\n1)Enqueue\n2)Dequeue\n3)Exit\n\nInput:\t");
scanf("%d",&choice);
switch (choice)
{
case 1:
    Enqu(circ);
    break;

case 2:

    Dequ(circ);
    break;

case 3:

    printf("\nExiting the program\n");
    exit(0);

default:
    printf("Invalid Input");
    main();
    break;
}


}