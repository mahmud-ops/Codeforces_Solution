#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int k , n , w;
    cin >> k >> n >> w;

    int cost = k * w * (w + 1)/2;//k (1 + 2 + 3 ... w)

    int borrow = cost  - n;

    if(borrow <= 0){
        borrow = 0;
    }

    cout << borrow;

    return 0;
}