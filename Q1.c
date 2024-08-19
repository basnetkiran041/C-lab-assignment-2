#include <stdio.h>
int main()
{
    int input_n, new_n = 0;
    int digit;

    printf("Enter any five digit number:");
    scanf("%d", &input_n);

    if (input_n >= 10000 && input_n <= 99999)
    {
        for (int i = 0; i < 5; i++)
        {
            digit = input_n % 10;
            new_n = new_n * 10 + (digit + 1) % 10;
            input_n /= 10;
        }
            printf("The new number after adding one to each of given digits is %d ", new_n);
    }
    else
    {
        printf("Invalid input! Please enter a valid five-digit number.\n");
    }
    return 0;
}