#include<stdio.h>
#include<stdlib.h>
void calex();
void main ();
int  BubSort(int arr[20],int size);
int  IntSot(int arr[20],int size);
int  SetSot(int arr[20],int size);
int  Smlsi(int arr[20],int size);


void calex(){
    int i;
    printf("\nDo you want to run again??\n");
    printf("\nEnter your choice\n1 -> Proceed\n2 -> Abort\n");
    fflush(stdin);
    scanf("%d",&i);
    switch(i){
        case 1:
        main();
        break;
        case 2:
        system("clear");
        system("cls");
        exit(0);
        default:
        printf("Please Enter again");
        calex();
    }

}

void main(){
    int arr[20],size,i,a,j;
    char s;
    printf("Sort Algorithms\n");
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array\n");
    fflush(stdin);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter your choice\na)Bubble Sort\nb)Insertion Sort\nc)Selection Sort\n");
    scanf("  %c",&s);

    switch(s){
        case 'a':
        BubSort(arr,size);
        calex();
        break;

        case 'b':
        IntSot(arr,size);
        calex();
        break;

        case 'c':
	SetSot(arr,size);
	calex();
        break;
    }

}

int BubSort(int arr[20],int size){
  int i,j,swap;
  for(i=0;i<size;i++){
    for(j=1;j<(size-i);j++){
      if (arr[j-1]>arr[j]){
        swap = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = swap;
      }
    }
  }
  printf("\n The Sorted array is");
  for(i=0;i<size;i++){
    printf("%d",arr[i]);
}
}


int IntSot(int arr[20],int size){
    int i,j,swap;
    for(i=0;i<size;i++){
        swap = arr[i];
        j = i-1;

    while(j>=0 && arr[j]>swap){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=swap;
    }
    printf("\n The Sorted array is\n");
    for(i=0;i<size;i++){
    printf("%d",arr[i]);
}
    calex();

    printf("\n The Sorted array is\n");
    for(i=0;i<size;i++){
    printf("%d",arr[i]);
    }
    calex();
}

int SetSot(int arr[20],int size){
   int k,pos,temp,i;
   for(k=0;k<size;k++)
   {
      pos=  SmlSi (arr,size);
      temp=arr[k];
      arr[k]=arr[pos];
      arr[pos]=temp;
    }
   printf("the sorted array is\n");
   for(i=0;i<size;i++)
   {
      printf("%dsize",arr[i]);
    }
 
}
int Smlsi(int arr[20],int size){
	int i,j,swap;
  for(i=0;i<size;i++){
    for(j=1;j<(size-i);j++){
      if (arr[j-1]>arr[j]){
        swap = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = swap;
      }
    }
	z = arr[0];
	return z;
  }
			
