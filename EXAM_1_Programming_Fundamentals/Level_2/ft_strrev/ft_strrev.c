#include <stdio.h>
char *ft_strrev(char *str){
   int len=0;
   while(str[len]){
    len++;
   }
    int i=0;
    int j=len-1;
    char tmp;
    while(str[i] && (i<j)){
       tmp=str[i];
       str[i]=str[j];
       str[j]=tmp;
       i++;
       j--;
    }
    return (str);
}
// int	main(void)
// {
// 	char s[] = "Hello World";
// 	ft_strrev(s);
// 	printf("%s\n", s);
// 	return (0);
// }