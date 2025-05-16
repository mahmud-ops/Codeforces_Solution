#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int a[4];
    int count = 0;
    for(int i = 0 ; i < 4 ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < 4 ; i++){
        if(a[i] == ' '){
            continue;
        }
        for(int j = i + 1 ; j < 4 ; j++){
            if(a[i] == a[j]){
                count++;
                a[i] = ' ';
            }
        }
    }

    cout << count;
    return 0;
}