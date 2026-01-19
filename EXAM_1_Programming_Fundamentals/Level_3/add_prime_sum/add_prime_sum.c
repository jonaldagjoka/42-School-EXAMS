#include <stdlib.h>
#include <stdio.h>
int length(int nbr){
    int i=0;
    if(nbr<=0)
        i++;
    while(nbr!=0){
        nbr=nbr/10;
        i++;
    }
    return (i);
}
char *ft_itoa(int nbr){
    int i;
    int len=length(nbr);
    long num=nbr;
    char *str;
    str=(char*)malloc((sizeof(char)*(len+1)));
    if(!str)
      return (NULL);
    str[len]='\0';
    i=len-1;
    if(num<0){
        str[0]='-';
        num=-num;
    }
    while(num>9){
        str[i]=num%10+48;
        num=num/10;
        i--;
    }
    str[i]=num+'0';
    return (str);
}
// int main(void){
//     printf("%s",ft_itoa(234));
//     return 0;
// }