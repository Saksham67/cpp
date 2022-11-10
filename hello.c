#include<stdio.h>          //Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdlib.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter angles: \n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    int angle=angle1+angle2+angle3;
    if(angle==180){
        printf("it's a traingle. \n");
    }
    else{
        printf("it's not a traingle.");
    }
}
