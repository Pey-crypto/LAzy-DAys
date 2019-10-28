#include<stdio.h>
#include<stdlib.h>

void main(){
char a[20];
int i;
printf("ENTER THE SIZE OF ARRAY");
scanf("%d",&i);
printf("enter the Input");
scanf("%s",a);
int size;
size = i;
while(size!=0){
	printf("%d\n",a[size]);
	size--;
}
}
