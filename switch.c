#include <stdio.h>
   int main()
   { int day; //1-"mon",2-"tue",3="wed",4="thru",5="fri",6="sat",7="sun"

      printf("enter day(1-7):");
    scanf("%d",&day);
     
    switch(day) {
         case 1:printf("monday \n");
              break; 
         case 2:printf("tuesday \n");
              break;
         case 3:printf("wednesday \n");
              break;
         case 4:printf("thursday \n");
              break;
         case 5:printf("friday \n");
              break;
         case 6:printf("saturday \n");
              break;
         case 7:printf("sunday \n");
              break;                
                     

      }
return 0;

   }