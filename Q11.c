#include<stdio.h>

int main() {
    float total_marks, per_marks;
    float math, c, web, micro, acc;

    // Prompt the user to enter marks for five subjects
    printf("Enter the student's marks in five subjects:\n");

    // Correct the scanf format specifiers for float
    scanf("%f %f %f %f %f", &math, &c, &web, &micro, &acc);

    // Calculate total marks
    total_marks = math + c + web + micro + acc;

    // Calculate percentage
    per_marks = (total_marks / 500) * 100;

    // Determine the division based on the percentage
    if (per_marks >= 80) {
        printf("The student has got distinction obtaining %.2f%% percentage.\n", per_marks);
    }
    else if (per_marks >= 60 && per_marks <= 70) {
        printf("The student has got first division obtaining %.2f%% percentage.\n", per_marks);
    }
    else if (per_marks >= 40 && per_marks <= 60) {
        printf("The student has got second division obtaining %.2f%% percentage.\n", per_marks);
    }
    else if (per_marks < 40) {
        printf("The student has failed, obtaining %.2f%%.\n", per_marks);
    }
    else {
        printf("Invalid input!!!\n");
    }

    return 0;
}
