#include<stdio.h>
#include<stdlib.h>
void calex();
void main ();
int  BubSort(int arr[20],int size);



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
        exit(0);
        default:
        printf("Please Enter again");
        calex();
    }

}

void main(){
    int arr[20],size,i,a;
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
        //InsertSort();
        break;

        case 'c':
        //SelectSort();
        break;
    }

}

int BubSort(int arr[20],int size){
    int i,j,swap;
    for(i=0;i<size-1;i++){
        for(j=1;j<size-i;i++){
            if(arr[j-1]>arr[j]){
                swap=arr[j-1];
                arr[j]=arr[j-1];
                swap = arr[j];
        }
    } 
}
for(i=0;i<size;i++){
    printf("%d",arr[i]);
}
}

