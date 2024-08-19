/*If cost price and selling price of an item is input thorough the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit or loss he made.*/
#include<stdio.h>
int main()
{
    float cp, sp, profit, loss;
 
 printf("Enter the cost price of the item:");
 scanf("%f",&cp);
 printf("Enter the selling price of the item:");
 scanf("%f",&sp);

    if(cp<sp){
        printf("The seller had made profit\n");
        profit = sp-cp;
            printf("The profit made by him = %f",profit);


    }
    else{
        printf("The seller had made loss\n");
        loss=cp-sp;
        printf("The loss made by him = %f",loss);
    }
return 0;
}