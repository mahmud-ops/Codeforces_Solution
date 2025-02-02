#include<stdio.h>
#include<ctype.h>

int main(){
    char str[1000];
    printf("Enter a word : \n");
    fgets(str, sizeof(str), stdin);

    int frequency[128] = {0};

    for(int i = 0 ; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        if(ch >= 32 && ch <= 126){
            frequency[ch]++;
        }
    }

    for(int i = 32; i < 126 ; i++){
        if(frequency[i] > 0){
            printf("Frequency of '%c' = %d\n", i, frequency[i]);
        }
    }
    return 0;
}