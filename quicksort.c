#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int custompivot(int size,int *a,int pivot); 
int normal(int *a);
void calex();
int swap(int *a,int *b); 

int main(){


int i,a[MAX],b,size,pivot,choice;


b = 0;


printf("Enter the Size of the Array");
scanf("%d",&size);
printf("Enter Your array\n");



for(i=0;i<=(size-1);i++){
	printf("Enter the %d : ",i);	
	scanf("%d",&a[i]);
	printf("\n");
}
a[i+1]='\0';


printf("This is your array\n");
for(i=0;i<=(size-1);i++){
	printf("%d\n",a[i]);	
}


	printf("Do want to Select the Pivot Value\n1)Yes\n2)Nope");
	scanf("%d",&choice);


	switch(pivot){

		case 1:
		scanf("%d",&pivot);
		custompivot(size,a,pivot);
		calex();
			
		case 2:
		normal(a);
		calex();


		}
}

void calex(){
	int a,b;
 
	printf("Do you want to Do this again \n 1)Yes \n 2)No \n ");
	scanf("%d",&a);
		
	switch(a){
		
		case 1:
		fflush(stdin);
		int custompivot(size,a,pivot); 
		int main();
		
		case 2:
		printf("Do you want to Keep the History \n 1)Yes \n 2)No");
		scanf("%d",&b);
		if(b==2){
		system("clear");
		system("cls");
		}
		if(b ==1){
		exit(0);
		}
}
}

int swap(int a , int b ){
	

	int temp; 
	temp =0 ; 
	temp = a;
	a = b;
	b = temp;
	}
	
	
int custompivot(int size,int a,int pivot){
	
	int flag,i,b,c;
	flag = 1;
	printf("Finding Pivot value");
	
	for(i=0;i<=(size-1);){
		if(a[i]==pivot){
			printf("The position has been found\n");
			c = i;
			break; 
			}
		if(a[i]!=pivot){
			i++;
		}
		if (a[i]!=pivot && i==(size-1)){
			printf("Pivot Value not found\n");
			flag =0;
			break;
		}
}


	if (flag==0){
		
		printf("Calling calex\n");
		calex();
	}
		
	if (flag== 1){
	

		printf("The value has been verfied to be present in the Array\nMoving ahead\n");
	  	

		int left,right;
		
		printf("Finding Left and right values of pivot\n");
		
		left = c-1;
		right =c+1;

		while(left!='\0' && right == -1){  
			
			if(a[left]<pivot){
				left++;
			}
		
			if(a[right]>pivot){
				right--;
			}

			if(a[left]>pivot){
				printf("Conducting A swap Between %d and %d \n",a[left],right);
				swap(a[left],a[right]);
				left++;
			}

			if(a[right]<pivot){
				printf("Conducting a swap between %d and %d \n",a[right],a[left]);
				swap(a[right],a[left]);
				right--;
		}
}
}
}



int normal(int a){
	
	int pivot,i,left,right;
	i=0;
	pivot = a[i];	
	left = i-1;
	right =i+1;



	while(left!='\0' && right == -1){  
			
			if(a[left]<pivot){
				left++;
			}
		
			if(a[right]>pivot){
				right--;
			}

			if(a[left]>pivot){
				printf("Conducting A swap Between %d and %d \n",a[left],right);
				swap(a[left],a[right]);
				left++;
			}

			if(a[right]<pivot){
				printf("Conducting a swap between %d and %d \n",a[right],a[left]);
				swap(a[right],a[left]);
				right--;
		}
}
}





		
		
	

	
				



		








