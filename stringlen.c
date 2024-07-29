#include<stdio.h>
#include<string.h>

char myname[20];

int main(){
    printf("enter your name \n");
    scanf("%s",myname);

    printf("\n");
    puts(myname);

    int length;
    length = strlen(myname);
    printf("the length of the string is :\t %d",length);

    return 0;
}