#include<stdio.h>

int main(){
  int size,i,j,arr[20],sea;
  char in;
  printf("\n\n\nSearch implementation\n");
  printf("Enter the array size");
  scanf("%d", &size);
  printf("Enter the Array\n"); 
  for (i=1;i<= size;i++){
    scanf("%d",&arr[i]);
  }
  for(j=1; j <= size; j++){
    printf("\n %d",arr[j]);
  }
  printf("Enter the Element you want to search\n"); 
  scanf("%d",&sea);
  printf("Select Your Choice\na)Linear Search\nb)Binary Search\nc)Binary Search Utilizing Recursion\ne)Exit\n");
  fflush(stdin);
  scanf("%c",&in);
  switch(in){
    case 'a':
      printf("Linear Search");
      break;
    case 'b':
      printf("Binary Search");
      break;
    case 'c':
      printf("Binary Search Utilizing Recursion");
      break;
    case 'e':
      printf("Exiting the Program");
      break;
  }
}