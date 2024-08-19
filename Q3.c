/* Q3: Write a program to find out the largest among any three numbers*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greater among all", a);
    }
    else if(b>a && b>c){
        printf("%d is greater among all",b);
    }
    else{
        printf("%d is greater among all",c);
    }
}