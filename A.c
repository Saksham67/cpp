#include<stdio.h>
#include<stdlib.h>
    int main(){
        char Alpha;
        printf("Enter any letter:");
        scanf("%c",&Alpha);

        if(Alpha>='A' && Alpha<='Z'){
            printf("%c is an Upper case... letter.",Alpha);
        }
        else if(Alpha>='a' && Alpha<='z'){
            printf("%c is a Lower case letter.",Alpha);
        }
        else{
            printf(" %c is not an english letter!!!",Alpha);
        }
    }