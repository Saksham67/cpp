#include<stdio.h>   //write a program to find factorial value of any number. 
#include<stdlib.h>
int main(){
    int number;
    printf("enter number:");
    scanf("%d",&number);
    int answer = 1;
    for(int i=1;i<=number;i++){
    answer *= i ;
    }
    printf("answer:%d",answer);
    return 0;
}
     
