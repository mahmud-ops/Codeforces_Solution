#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int y;
    cin >> y;
    int dig[4],i = 0;
    while(y > 0){
        dig[i] = y%10;
        y /= 10;
        i++;
    }

    for(int i = 0 ; i < 4 ; i++){
        for(int j = i + 1 ; j < 4 ; j++){
            if(dig[i] == dig[j]){
                cout << y++;
            }
        }
    }
    return 0;
}