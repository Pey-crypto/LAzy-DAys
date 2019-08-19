#include<stdio.h>
#include<stdlib.h>

// Four Functions

int LinSec();
int BinSec();

int BinR_Sec();
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
for(i=0;i<size;i++){
  scanf("%d",&arr[i]);
}
for(j=0;j<size;j++){
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
    BinSec(arr,size,sea);
    break;
  case 'c':
    printf("Binary Search with Recursion\n");
    BinR_Sec(arr,size,sea);
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

//Swap function
int BubSort(int arr[20],int size){
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
}

//Binary Function 
int BinSec(int arr[20],int size,int sea){
  int a,b,rage,r,i;
  r = 1;
  a = 0;
  b = size-1;
  BubSort(arr,size);
  while(a<=b){
    rage = (a+b)/2;
    if(arr[rage]==sea){
      printf("It has been found at %d",rage);
      r = 0;
      break;
    }
    if(arr[rage]>sea){
      b = rage-1;
    } 
    if (arr[rage]<sea){
      a = rage +1;
    }
  }
  if(r == 1){
    printf("\nThe element has not been found");
  }
}


int BinR_Sec(int arr[20],int size,int sea){
  int i,a,b,rage;
  a = 0;
  b = size-1;
  rage =(a+b)/2;
  BubSort(arr,size);
  if(arr[rage]==sea){
    printf("The element is present at %d",rage);
  }
  if(arr[rage]>sea){
    b =  rage - 1;
    BinR_Sec(arr,size,sea);
  }
  if(arr[rage]<sea){
    a = rage -1;
    BinR_Sec(arr,size,sea);
  }
}