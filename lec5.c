#include <stdio.h>

int main() {
    int age;
    float gpa;
    char grade;

    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter your gpa: ");
    scanf("%f", &gpa);

    printf("enter your grade: ");
    scanf(" %c", &grade);

    printf("you are %d years old\n", age);
    printf("your gpa is %.2f\n", gpa);
    printf("your grade is %c\n", grade);

    return 0;
}