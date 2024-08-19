/*Q2:Write a program to check whether the given program is odd or even */
#include<stdio.h>
int main()
{
    int n;
    printf("Please enter any number:");
    scanf("%d", &n);
    if (n%2 ==0)
    {
        printf("The number you have entered is even!");
    }
    else{
        printf("The number you have entered is odd!");
    }
    return 0;
}