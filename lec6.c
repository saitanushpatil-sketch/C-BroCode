#include<stdio.h>
#include<string.h>
int main(){
    //shopping cart program
    char item[50]="";
    int quantity=0;
    float price=0.0;
    float total=0.0;
    printf("enter the item name: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';//removing the newline character from the end of the string
    printf("enter the quantity: ");
    scanf("%d",&quantity);
    printf("enter the price: ");
    scanf("%f",&price);
    total=quantity*price;
    printf("You have ordered %d x %s\n",quantity,item);
    printf("Total Bill is: %.2f\n",total);
    return 0;
}