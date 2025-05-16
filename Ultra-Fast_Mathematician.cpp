#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    string num_1 , num_2;
    cin >> num_1 >> num_2;
    char output[num_1.length()];

    for(int i = 0 ; i < num_1.length() ; i++){
        if(num_1[i] == num_2[i]){
            output[i] = '0';
        }
        else{
            output[i] = '1';
        }
    }

    for(int i = 0 ; i < num_1.length() ; i++){
        cout << output[i];
    }
    return 0;
}