#include <stdio.h>
int main(){
  
  int number;
  printf("enter number:\n");
  scanf("%d",&number);

  if(number>=0){
    printf("positive \n");
    if(number%2==0){
        printf("even number");
         } else{
            printf("odd number");
         }} else{

    printf("negative number");
   } 
    return 0;
}
 
