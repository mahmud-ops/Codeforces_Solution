#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    gets(str);

    int sum = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        int digit = str[i] - '0';
        sum += digit; 
    }

    printf("%s\n",str);
    printf("sum = %d",sum);
    return 0;
}