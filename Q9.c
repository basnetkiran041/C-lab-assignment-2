/*Q10: Write a program that asks a number and tests whether the number is exactly divisible by 5 but not by 11*/
#include<stdio.h>
int main(){
int n;
printf("Enter any number :");
scanf("%d",&n);

if(n%5==0 && n%11!=0){
    printf("The number %d is exactly divisible by 5 but not by 11",n);

}
else{
    printf("The number %d is neither divisible by 5 nor by 11 ", n);
}
return 0;
}