#include <stdlib.h>
#include <stdio.h>
int length(int nbr){
    int len=0;
    if(nbr<=0){
        len++;
    }
    while(nbr!=0){
        nbr/=10;
        len++;
    }
    return (len);
}
char *ft_itoa(int nbr){
    int len=length(nbr);
    char *str=(char*)malloc((len+1)*sizeof(char));
    long n=nbr;
    if(!str)
    return (NULL);
    str[len]='\0';
    int i=len-1;
    if(n<0){
        str[0]='-';
        n=-n;
    }
    
    while(n>9){
        str[i]=n%10+48;
        n/=10;
        i--;
    }
    str[i]=n+48;
    return str;
}
int main(){
    printf("%s\n",ft_itoa(-342222222));
    return 0;
}