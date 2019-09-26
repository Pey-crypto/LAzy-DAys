#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add(int j);
void main (){
	int z,arr1[20],arr2[20],i,j,size1,size2;


	printf("Enter the size of the array\n");
	scanf("%d",&size1);
	for(i = 0;i<=(size1-1);i++){
		printf("Enter the Element arr1[%d] :",i);
		scanf("%d",&arr1[i]);
		printf("\n");}
	 

 	printf("Enter the size of the array\n");
	scanf("%d",&size2);
	for(i = 0;i<=(size2-1);i++){
		printf("Enter the Element arr2[%d] :",i);
		scanf("%d",&arr2[i]);
		printf("\n");}
  

	j = memcmp(arr1,arr2,20);
	add(j);	
}

int add(int j){
	int a,b,c;
	if(j<0){
		a =abs(j);
		printf("\nThe array1 is lesser than array2 by %d values",a);}
	if(j>0){
		a = abs(j);
		printf("\n The array 2 is lesser than array1 by %d values",a);}
	if(j==0){
		printf("\n It is a draw");}
}




	
