#include<stdio.h>
#include<string.h>

int main(){
    char str[1000],str_rev[1000];
    gets(str);

    strcpy(str_rev , str);

    strrev(str_rev);

    int isPalindrome = strcmp(str , str_rev);

    if(isPalindrome == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

    return 0;
}