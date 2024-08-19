/*Any character is entered through keyboard .Write a program to determine whether the character entered is a capital letter, a small letter, a digit or a special symbol.
Characters             Ascii values           
A-Z                     65-90
a-z                    97-122
0-9                     48-57
special symbols       0-47, 58-64, 91-96,123-127*/

#include<stdio.h>
int main()
{
    char ch;
printf("Enter any character:");
scanf("%c", &ch);

//for capital letters
if(ch>=65 && ch<=90){
printf("The character you have entered is capital letter.\n");

}
//for small letters
else if(ch>=97 && ch<=122){
    printf("The character you have entered is small letters: \n");
}

//for digits
else if(ch>=48 && ch<=57){
    printf("The character you have entered is a digit.\n");
}

//for special symbols
else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)){
    printf("The character you have entered is a special symbol. \n");

}
else{
    printf("INVALID!!!! The character you have entered is out of this program syllabus.");
}
return 0;}
