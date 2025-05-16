#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin >> n;
    int m , n , k , j;
    int length = m * n;
    char venue[length];
    for(int i = 0 ; i < n ; i ++){
        cin >> m >> n >> k;
        for(j = 0 ; j < length ; j+2){
            venue[j] = 'a';
        }
        for(k = j ; k >= 0 ; k--)
    }
    return 0;
}