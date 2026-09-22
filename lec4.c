#include<stdio.h>
int main(){
    int x=1;
    int y=2;
    int z=x+y;
    printf("the sum of %d and %d is %d\n",x,y,z);
    //similarly we can do subtraction, multiplication and division and % is used for modulus ie remainder!!
    int a=10;
    a++;//this is increment operator and it will increase the value of a by 1
    printf("the value of a is %d\n",a);
    a+=5;//this is addition assignment operator and it will add 5 to the value of a
    printf("the value of a is %d\n",a);//we can similarly use -=, *=, /= and %= for subtraction, multiplication, division and modulus assignment operators respectively
    

    return 0;
}