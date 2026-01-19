int ft_strlen(char *str){
    int count=0;
    int i=0;
    while(str[i]){
        count++;
    }
    return count;
}