#include<stdio.h>

void main(){
int arr[20],i,in;
char u;
printf("Sort algo's\n");
printf("Enter the array size\n");
scanf("%d",&in);
printf("Enter the array");
for(i=0;i<=in;i++){
	scanf("%d",arr[i]);
}
printf("Enter the uti \na)Bubble Sort\nb)Insertion Sort\nc)Selection Sort:\n");
fflush(stdin);
scanf("%c",&u);
 switch(u){
 case 'a':
 BubSort(arr,in);
 break;

 case 'b':
 InsertSort(arr,in);
 break;

 case 'c':
 SelSort(arr,in);
 break:
}
}


void BubSort(int arr[20],int in){
  int i,j,swap;
  for(i=1;i<=size;i++){
    for(j=1;j<=(size-i);j++){
      if (arr[j-1]>arr[j]){
        swap = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = swap;
      }
    }
  }
for(i=0;i<in;i++){
	printf("%d",arr[i]); 
} 	

}	
 

void InsertSort(int arr[20],int in){
	
    int i, key, j; 
    for (i = 1; i < in; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    }
for(i=0;i<in;i++){
	printf("%d",arr[i]); 
} 	


void SelSort(int arr[20],int in){

	int z
	z = MinEl(arr,in);
		
	







void MinEl(int arr[20],int in){
	int min,pos;
	min =0;
	pos =0;
	for(a =0;a<=in;a++){
		if (arr[a+1]<arr[a]){
			min = arr[a+1];
			pos = [a+1];
}
}
}



