#include <stdio.h>

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#ifndef __CXX_TEST_MAIN__

#include<stdio.h>

int length,max,min,numarr[20];

int main(){

    printf("enter the length of the array\n");
    scanf("%d",&length);
   
    for(int i = 0;i<length;i++){
        scanf("%d",&numarr[i]);
    }

    for (int i = 0;i<length;i++){
        printf("%d\t",numarr[i]);
    }
    printf("\n");
    max = numarr[0];
    min = numarr[0];
    
	for(int i = 0;i<length;i++){
        if(numarr[i]>max){
            max = numarr[i];
        }
        if(numarr[i]<min){
            min = numarr[i];
        }
    }
    printf("the max number is : %d\n",max);
    printf("the min number is : %d\n",min);
    return 0;
}

//NOTE: UNCOMMENT THE BELOW LINE TO ENABLE WHITEBOX TEST CASE
//#endif