#include<stdio.h>

    int fact(int n){
        if(n == 1 || n == 0){
            return 1;
        }
        else{
            return n * fact(n - 1);
        }
    }

int main(){
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);

    if(n < 0){
        printf("Invalid input , Enter a positive integer \n");
    }
    else{
        int factorial = fact(n);
        printf("Factorial of %d is %d\n",n,factorial);
    }
    return 0;
}