#include<stdio.h>

int max(int num1 ,int num2);

int main(){
    int a = 5;
    int b = 6;
    int value = max(a,b);

    printf("%d",value);

    return 0;
}

int max(int num1 ,int num2){
    int result;
    if(num1>num2){
        result = num1;
    }
    else if(num1<num2){
        result = num2;
    }

    return result;
}