#include <unistd.h>
int count(char *str){
    int i=0;
    while(str[i])
    i++;

    return i;
}
int main(int ac,char *av[]){
    if(ac==2){
        if(av[1]){
             int l=count(av[1]);
             while(l>=0){
                write(1,&av[1][l],1);
                l--;
             }
        }

    }
    write(1,"\n",1);
    return 0;
}