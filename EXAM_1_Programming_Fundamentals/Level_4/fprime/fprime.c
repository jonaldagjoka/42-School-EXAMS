#include <stdio.h>
#include <stdlib.h>

int main(int ac,char *av[]){
    if(ac==2){
        int i=2;
        int num=atoi(av[1]);
        while(i<=num){
            if(num%i==0){
                printf("%d",i);
                if(num!=i)
                 printf("*");
                num=num/i; 
            }else i++;
        }
    }
    printf("\n");
    return 0;
}