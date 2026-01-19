#include <stdlib.h>
//#include <stdio.h>
char *ft_strdup(char *src){
    char *tmp;
    int len=0;
    int i=0;
    while(src[len]){
        len++;
    }
    tmp=malloc(sizeof(char)*len+1);
    if(!tmp){
        return 0;
    }
    while(src[i]){
        tmp[i]=src[i];
        i++;
    }
    tmp[i]=0;
    return (tmp);
}
// int main(){
//     printf("%s",ft_strdup("Hello"));
//     return 0;
// }
