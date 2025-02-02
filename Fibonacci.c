#include<stdio.h>
//1 1 2 3 5 8
int fibo(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibo(n - 1) + fibo(n -2) ;
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n == 1){
        printf("1st element of the fibonacci series is %d",fibo(n));
    }
    else if(n == 2){
        printf("2nd element of the fibonacci series is %d",fibo(n));
    }
    else if(n == 3){
        printf("3rd element of the fibonacci series is %d",fibo(n));
    }
    else{
        printf("%dth element of the fibonacci series is %d",n,fibo(n));
    }

    return 0;
}