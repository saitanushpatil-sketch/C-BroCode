#include<stdio.h>
#include<string.h>
int main(){
    //MAD LIBS GAME1
    char noun[50]="";
    char verb[50]="";
    char adjective1[50]="";
    char adjective2[50]="";
    char adjective3[50]="";
    printf("Enter an adjective: ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1]='\0';//removing the newline
    printf("Enter the noun: ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';//removing the newline
    printf("Enter an adjective: ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1]='\0';//removing the newline
    printf("Enter a verb: ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';//removing the newline
    printf("Enter an adjective: ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1]='\0';//removing the newline

    printf("Today i went to the %s and saw a %s %s %s. I was so %s that i decided to %s.\n",adjective1,noun,adjective2,adjective3,adjective1,verb);
    return 0;
}
