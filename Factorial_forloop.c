#include<stdio.h>

int main(){
    long n , result = 1;
    printf("Enter a positive integer : ");
    scanf("%d",&n);

    if(n < 0){
        
    }
    else{
        for(int i = 1 ; i <= n ; i++){
            result *= i;
        }
    }
    printf("Factorial = %d",result);
    return 0;
}