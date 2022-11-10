#include<stdio.h>
#include<stdlib.h>
int main(){
 int mathematics,physics,chemistry,english,hindi;
  printf("enter mathematics: \n");
  scanf("%d",&mathematics);
  printf("enter physics: \n");
  scanf("%d",&physics);
  printf("enter chemistry: \n");
  scanf("%d",&chemistry);
  printf("enter english: \n");
  scanf("%d",&english);
  printf("enter hindi: \n") ;
  scanf("%d",&hindi);
  
        float percentage=(mathematics+physics+chemistry+english+hindi)/5;
      if(percentage<=95){printf("A grade \n");}

      else if(percentage<=85){printf("B grade \n");}
      else if(percentage<=65){printf("C grade \n");}
       
       else{printf("D grade");}







}
