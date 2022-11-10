#include <stdio.h>

int main()                              //write a program to find out even or odd number.
{
  int a;
  printf("enter number:");
  scanf("%d",&a);

  if(a%2==0){ 
    printf("%d is even number.\n",a);

  }
   else{
      printf("%d is odd number.\n",a);
   }
 return 0;
}