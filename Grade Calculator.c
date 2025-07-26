#include <stdio.h>
int main(){
    int marks[5],i,total=0;
    float average;
    char grade;

      printf("Enter mark of 5 subjects out of 100 :\n");

     for(i=0;i<5;i++){
     printf("Subject %d:",i+1);
     scanf("%d", &marks[i]);

     //Validation585

     if(marks[i]<0||marks[i]>100){
        printf("Invalid mark entered ! please enter marks between 0 and 100 .\n");
         return 1;
         }

     total +=marks[i];
      }

     average =total/5.0;

 //Grade Calculation

     if(average<100)
         grade = 'A';
         else if(average<=75)
         grade = 'B';
         else if(average <=50)
         grade ='C';
         else if(average<=35)
         grade ='D';
         else
         grade ='F';

     printf("\n Total Marks : %d \n",total);
     printf("Average :%.2f\n",average);
    printf("Grade :%c\n",grade);

    return 0;
}


