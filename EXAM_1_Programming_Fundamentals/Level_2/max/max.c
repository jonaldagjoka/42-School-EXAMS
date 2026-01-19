#include <stdio.h>
int max(int *tab,unsigned int len){
    unsigned int i=0;
    unsigned int c=0;
    int max=tab[0];
    if(len>0){
       
    while(c<len){
      if(tab[i]>max){
        max=tab[i];
      }
      i++;
      c++;
    }
    return max;
}
return 0;
}
// int main()
// {
// 	int int_tab[] = {1, 3, 2, 10, 9};
// 	printf("%d", max(int_tab, 5));
//     return 0;
// }