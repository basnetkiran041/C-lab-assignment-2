/*Write a program that ask the marks of student in five subjects and find out the percentage of marks.
The program should rank the student as:
80% and above--- distinction
60% to 70%---First division
40% to 60%---Second division
Below 40% fail
*/
#include<stdio.h>
int main()
{
    float total_marks,per_marks;
    float math, c, web , micro, acc; 
    printf("Enter the student's marks in five subjects :");
    scanf("%2f%2f%2f%2f%2f",&math,&c,&web,&micro,&acc);

    total_marks=math+c+web+micro+acc;
    per_marks=(total_marks/500)*100;

    if(per_marks>=80){
        printf("The student have got distinction obtaining %.2f%% percentage",per_marks);
    }

    else if(per_marks>=60 && per_marks<=70){
         printf("The student have got first division obtaining %.2f%% percentage",per_marks);
    }
    else if(per_marks>=40 && per_marks<=60){
         printf("The student have got second division obtaining %.2f%% percentage",per_marks);
    }
    else if(per_marks<40){
        printf("THe student is fail as he have obtained %.2f%%",per_marks);
    }
    else{
        printf("Invalid!!!");
    }

return 0;

    

}