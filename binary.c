#include<stdio.h>
int LinSec(int arr[],int num,int sea); 

int BinSec(int num);

int BubSort(int arr[]);

int main(){

	int num,sea,i,j,arr[20];
	printf("Enter the no of elements\n");
	scanf("%d",&num);
	printf("Enter your Array:\n");

	for(j=1;j<=num;j++){
	scanf("%d",&arr[j]);
	}

	printf("Enter the no to be searched\n");
	scanf("%d",&sea);
	

	//Choice Part
	for(i=0;i!=3;)
		printf("1 => Binary Search \n 2=> Linear Search \n To exit from Program PRESS ANY OTHER CHARACTER");
		scanf ("%d", &cho);
		

		if ( cho ==1 ){
			int LinSec(int arr[],int num,int sea); 
		if ( cho ==2 ){
			int BinSec(int arr[]);			
}


// Linear Search Program

int LinSec(int arr[],int num,int sea){
	int i;

	for(i=0;i<=num;){
			if(arr[i]==sea){
				printf("The no has been found at location %d\n",i);
				break;
				}
			if(arr[i]!=sea){
				i++;
				}
			}
			else{
			printf("The element has not been found");
			fflush(stdin);
}

//Bubble Sort

int BubSort(int arr[]){
	int he , da ,temp;
	for(he = 0; he>num ; he++){
		if(arr[da-1]>arr[da]){
		for ( da = 1; da > num - he ; da++){
			temp = arr[da-1];
			arr[da-1] = arr[da];
			arr[da] = temp;
			return z;
			}
	}
}
}


//Binary Search 


int BinSec(int num,int sea){
	int av,z[20],num,i;
	av = (0+num)/2;
	i == av;
	z = BubSort(int arr[], int he , int da , int temp);
	for ( i = 0 ;i > num;){
		if ( z[i] = sea){
			printf("
	


	

	 






































