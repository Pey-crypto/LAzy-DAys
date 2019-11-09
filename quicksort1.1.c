#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int custompivot(int size,int a[MAX],int pivot); 
int normal(int a[MAX],int size);
void calex(int pivot,int size,int a[MAX]);
int swap(int a,int b); 

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


	printf("Do want to Select the Pivot Value\n1)Yes\n2)Nope\n");
	scanf("%d",&choice);
int j;

	switch(choice){

		case 1:
		printf("Enter the pivot value\n");
		scanf("%d",&pivot);
		custompivot(size,a,pivot);
		calex(pivot,size,a);
		
			
		case 2:
		normal(a,size);
		calex(pivot,size,a);

		default:
		printf("Wrong Value entered\n");
		main();
		}
}

void calex(int pivot,int size,int a[MAX]){
	int c,b;
	b=0;
	printf("Do you want to Do this again \n 1)Yes \n 2)No \n ");
	scanf("%d",&c);
		
	switch(c){
		
		case 1:
		fflush(stdin);
		custompivot(size,a,pivot); 
		main();
		
		case 2:
		printf("Do you want to Keep the History \n 1)Yes \n 2)No");
		printf("\n The value stored is %d ",b);
		scanf("%d",&b);
		printf("\n The value stored is %d ",b);
		//weird Bug found needs further inspection
		if(b==1){
		exit(0);
		}
		if(b ==2){
		system("clear");
		system("cls");
		break;
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
	
	
int custompivot(int size,int a[MAX],int pivot){

	
	int flag,i,b,c,l;
	l =size;
	flag = 1;
	printf("Finding Pivot value\n");
	
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
		calex(pivot,size,a);
	}
		
	if (flag== 1){
	

		printf("The value has been verfied to be present in the Array\nMoving ahead\n");
	  	

		int left,right;
		
		printf("Finding Left and right values of pivot\n");
		
		left = c-1;
		right =c+1;
		printf(" the left value is %d \n",a[left]);
		printf("The right vlaue is %d \n",a[right]);

		  
			
			if(a[left]<pivot){
				left++;
			}
		
			if(a[right]>pivot){
				right--;
			}

			if(a[left]>pivot){
				printf("Conducting A swap Between %d and %d \n",a[left],a[right]);
				int temp; 
				temp =0 ; 
				temp = a[left];
				a[left] = a[right];
				a[right] = temp;
				left++;
			}

			if(a[right]<pivot){
				printf("Conducting a swap between %d and %d \n",a[right],a[left]);
				int temp;
				temp =0; 
				temp = a[right];
				a[right] = a[left];
				a[left] = temp;
				right--;
				}

}

int h;
for(h=0;h<=(l-1);h++){
	printf("The value at %d : %d \n",h,a[h]);
}
}




int normal(int a[MAX],int size){
	int j;
	printf("Entered the function 2\n");
	for(j=0;j<=(size-1);j++){
		printf("\n %d\n ", a[j]);
	}
	
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





		
		
	

	
				



		








