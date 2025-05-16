#include<stdio.h>
#include<string.h>

int main(){
    char number[1000];
    printf("Enter a number : \n");
    gets(number);

    int sum = 0;
    for (int i = 0; number[i] != '\0'; i++) {
        if (number[i] >= '0' && number[i] <= '9'){ 
            int digit = number[i] - '0'; 
            sum += digit * digit * digit;
        }
    }
    printf("Cube of the sum of the digits = %d\n",sum);

    if(sum == 153){
        printf("Armstrong number\n");
    }
    else{
        printf("Not an armstrong number\n");
    }
    return 0;
}