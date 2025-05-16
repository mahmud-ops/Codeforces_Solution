#include<stdio.h>

int main(){
    char str[100];
    int freq[256] = {0};
    printf("Enter string : ");
    gets(str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] != 0){

            freq[str[i]]++;
        }

        
    }
    for(int i = 0 ; i < 256 ; i++){
        if(freq[i] > 0){
            printf("Frequency of %c is %d\n",i,freq[i]);
        }
    }
    return 0;
}