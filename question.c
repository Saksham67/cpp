#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,num1,num2;
  printf("enter numbers:");
  scanf("%d%d",&num1,&num2);
   
   printf("enter value:");
   scanf("%d",&i);

   if(i==1){printf("added values is:%d",num1+num2);}

    else if(i==0){printf("subtraction value is:%d",num1-num2);}
    else{printf("invalid");}
  }