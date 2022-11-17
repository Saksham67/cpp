#include<stdio.h>          /*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdlib.h>
int main(){
    int physics,chemistry,biology,mathematics,computer;
    printf("Enter Marks: \n");
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);

    float percentage=(physics+chemistry+biology+mathematics+computer)/5;

    if(percentage>=90){
        printf("Grade A \n");

            } else if(percentage>=80){
                printf("Grade B \n");
            }
            else if(percentage>=70){
                printf("Grade C \n");
            }
            else if(percentage>=60){
                printf("Grade D \n");
            }
            else if(percentage>=40){
                printf("Grade E \n");
            }
            else if(percentage<40){
                printf("Grade F \n");
            }
   
    else{
        printf("Fail**************");
    }

    
}
