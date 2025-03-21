#include<stdio.h>
// 0 1 1 2 3 5 
int main(){
    int fibo[10000];
    int length;
    scanf("%d",&length);

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2 ; i < length + 2 ; i++){
        printf("%d ",fibo[i]);
        fibo[i + 1] = fibo[i] + fibo[i - 1];
    }
    return 0;
}