#include<stdio.h>
int main(){
    float age=18;
    int year=2026;
    int quantity=5;
    //we can use double for long values , we use %f for it tooo!!!!
    char grade='A';//we can store symbol and all too
    char name[]="Sai Tanush";//we can store string tooo
    //we use boolean for true or false values
    printf("you are %.1f years old\n",age);
    printf("the year is %d\n",year);
    printf("you have ordered %d x items\n",quantity);
    printf("your grade is %c\n",grade);
    printf("your name is %s\n",name);
    return 0;
}