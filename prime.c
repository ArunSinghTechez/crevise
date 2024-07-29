#include<stdio.h>

int count =0;
int num,org;

int main(){
    printf("Enter the number\n");
    scanf("%d",&num);
    org = num;

    for(int i =1;i<=num;i++){
        if(num%i==0){
        count++;
        }
    }

    if(count==2){

        printf("the %d: is a prime number",org);
    }
    else {
        printf("the %d : is not a prime number",org);
    }




    return 0;
}
