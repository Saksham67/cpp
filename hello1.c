#include <stdio.h>      //write a c program to check whether a number is divisible by 5 and 11 or not
#include<stdlib.h>
void main(){
	int a;
	printf("enter value \n");
	scanf("%d",&a);
	if(a%5==0 && a%11==0){printf("%d is divisible by 5 and 11. \n",a);}	
	 else{printf("not divisible by 5 and 11.");}	
    }
   