#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    long long n;
    int f;
    cin >> n;

    if(n % 2 == 0){
        cout << n/2;
    }
    else{
        cout << -((n/2) + 1);
    }
    return 0;
}