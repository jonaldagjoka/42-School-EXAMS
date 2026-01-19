#include <unistd.h>
int ft_count(char *str){
    int c=0;
    int i=0;
   while(str[i])
    {
        c++;
        i++;
    }
    return c;
}
 int main (int ac,char *av[])
 
 {
    if(ac==2)
    {
       int l=ft_count(av[1]);
       if(l>1){
        unsigned int i;

        i=0;

        while(av[1][i]==32 || av[1][i]==9)
             i++;
  
        while((av[1][i] != 32 && av[1][i] != 9) && av[1][i])
            write(1,&av[1][i++],1);
        
    }
    }
    write(1,"\n",1);
    return 0;

 }
