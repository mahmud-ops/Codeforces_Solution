#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n , h , sum = 0;
    cin >> n >> h;
    int* a = new int[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        if(a[i] > h){
            sum += 2;
        }
        else if(a[i] <= h){
            sum += 1;
        }
    }

    cout << sum;
    return 0;
}