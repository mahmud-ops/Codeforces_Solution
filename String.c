#include<stdio.h>

int main(){
    char string[1000];
    fgets(string , sizeof(string) , stdin);

    int len;
    for(int i = 0 ; string[i] != '\0' ; i++){
      len = i + 1;  
    }

    printf("Length = %d",len);
    return 0;
}