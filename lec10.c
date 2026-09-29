#include<stdio.h>
#include<math.h>
int main(){
    //COMPOUND INTEREST CALCULATOR
    double principal=0.0;
    double rate=0.0;
    int years=0;
    int timescompunded=0;
    double total=0.0;

    printf("Compound interest calculator\n");

    printf("Enter the principal amount: ");
    scanf("%lf",&principal);

    printf("Enter the rate of interest: ");
    scanf("%lf",&rate);
    rate=rate/100;

    printf("Enter the number of years: ");
    scanf("%d",&years);

    printf("Enter the number of times compounded per year: ");
    scanf("%d",&timescompunded);

    total=principal*pow((1+(rate/timescompunded)),(timescompunded*years));
    printf("The total amount is: %lf", total);
    return 0;
}