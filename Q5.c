/*Q5: A sales man gets commission bases on his daily sales and the rates of the commission is as follows
Total sales made                                   Commission rate
Below 5000                                              1%
Below 5000 to 8000                                      3%
Below 8000 to 11000                                     5%
Above 11000                                             10%

Write a program asking his total sales and calculate his commission amount:
*/

#include<stdio.h>
int main()
{
float sales_amt, com_amt, com_rate;
printf("Enter your total sales amount:");
scanf("%f",&sales_amt);
if(sales_amt<5000){
    com_rate = 0.01;
}
else if(sales_amt<8000 && sales_amt>5000){
    com_rate = 0.03;
}
else if(sales_amt<11000 && sales_amt>8000){
    com_rate = 0.05;
}
else{
    com_rate = 0.10;
}
com_amt = sales_amt*com_rate;
printf("The commission amount is %f", com_amt);
return 0;
}