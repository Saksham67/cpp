#include <stdio.h>    //write a program to check weather number is palindrome or not.
#include<stdlib.h>
int main(){
    int x;
    printf("enter number:");
    scanf("%d",&x);
    int or_number = x;
    int r,reversed = 0;
    printf("%d\n",reversed);
    for(1;x!=0;1){
        r = x%10;
        reversed = reversed * 10 + r;
        x = x/10;
    }
    if (or_number == reversed)
    {
        printf("%d is palindrome",or_number);   
    }
    else{
        printf("%d is not palindrome",or_number);
    }

    return 0;
}