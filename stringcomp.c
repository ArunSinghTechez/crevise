#include<stdio.h>
#include<string.h>


char src[]= "arun singh";
char dest[30] = "hello ";

int main(){
    printf("the string is:\t");
    puts(src);
    printf("\n");
    puts(dest);
    printf("%d\n",strcmp(src,dest));
    printf("length of src %d\t",strlen(src));
     printf("length of dest %d\n",strlen(dest));
     strcat(dest,src);
      printf("the string is:\t");
    puts(src);
    printf("\n");
    puts(dest);
    printf("length of src %d\t",strlen(src));
     printf("length of dest %d",strlen(dest));

     printf("\n%d\n",strcmp(src,dest));
    return 0;
}