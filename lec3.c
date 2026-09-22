#include<stdio.h>
int main(){
    int age=18;
    float price=99.99;
    double pi=3.14159265358979323846;
    char currency='$';
    char name[]="Sai Tanush";

    printf("you are %d years old\n",age);
    printf("the price is %.2f\n",price);
    printf("the value of pi is %.20lf\n",pi);
    printf("the currency symbol is %c\n",currency); 
    printf("your name is %s\n",name);

    int num1=1;
    int num2=10;
    int num3=-100;

    printf("%4d\n",num1);
    printf("%4d\n",num2);
    printf("%4d\n",num3);
    printf("%+d\n",num3);
    return 0;
}