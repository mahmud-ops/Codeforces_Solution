#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n , count = 0;
    cin >> n;
    int decider[100];

    for(int i = 0 ; i < n ; i++){
        cin >> decider[i];
        if(decider[i] == 1){
            count++;
        }
    }

    if(count == 0){
        cout << "EASY" << endl;
    }
    else{
        cout << "HARD" << endl;
    }
    return 0;
}