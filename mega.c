#include<stdio.h>
#include<stdlib.h>

// Four Functions

int LinSec();
int BinSec();

//int BinR_Sec();
int BubSort();

int main(){
// Variable List
  int sea,arr[20],i,j,size;
  char in;
// Sea = Search Term 
// arr[20] = Array of Size 20
// in = Input for Switch 
// I and J are variables for the Loops
// size = size of array demanded by user

printf("Search Algorithms\n");

//Size of Array
printf("Enter the Size\n");
scanf("%d",&size);

//Array Entered by user along with Entry Loop using size in the Condition
printf("Enter the Array\n");
for(i=1;i<=size;i++){
  scanf("%d",&arr[i]);
}
for(j=1;j<=size;j++){
  printf("%d",arr[j]);
}

//Search Term 
printf("\nEnter the item to be searched\n");
scanf("%d",&sea);

// Switch Choice Menu
printf("Select Your Choice \n");
printf("a)Linear Search\nb)Binary Search\nc)Binary Search by Recursion\nd)Exit\n");
scanf("  %c",&in );

switch(in){
  case 'a':
    printf ("Linear Search\n");
    LinSec(arr,size,sea);
    break;
  case 'b':
    printf("Binary Search\n");
    BinSec();
    break;
  case 'c':
    printf("Binary Search with Recursion\n");
    break;
  case 'd':
    printf("Exit\n");
    exit(EXIT_SUCCESS);
    break;
}
}


// Linear Search Algorithm

int LinSec(int arr[20],int size,int sea){
  int j,r;

// R acts as the Check 
  r = 1;
  for(j=1;j<=size;){
    if(arr[j]==sea){
      printf("\nIt has been found at Location \t%d",j);
      r = 0;
      break;
    }
    if (arr[j]!=sea){
      j++;
    }   
  }
  if (r==1){
    printf("No matching element found");
  }
}


int BubSort(){
 
}    
}


int BinSec(){
  printf("Hello There\n");
  BubSort(arr,size);
}
