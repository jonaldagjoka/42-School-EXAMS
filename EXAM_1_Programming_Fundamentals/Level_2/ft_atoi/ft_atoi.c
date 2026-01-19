int id_space(int c){
    if((c>=9 && c<=13)||c==32)
      return 1;
    return 0;
}
int is_digit(int c){
    if(c>=48 && c<=57)
     return 0;
    return 1;
}
int ft_atoi(const char *str){
     int i=0;
     int res=0;
     int s=1;
   while(str[1]){
    while(is_space(str[1]))
        i++;

    if(str[1]=='-'){
        s=-1;
        i++;
    }
     if(str[1]=='+'){
        s=1;
        i++;
    }
    if(is_digit(str[1])){
        res*=10;
        res+=str[1]-48;
        i++;
    }
   }
   return (res*s);
}