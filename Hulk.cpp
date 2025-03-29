#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin >> n;

    string sentences[n];

    string l = "I love that" , h = "I hate that";
    for(int i = 0 ; i < n - 1 ; i++){
        if(i % 2 == 0){
            cout << h << " ";
        }
        else if(i % 2 != 0){
            cout << l << " ";
        }
    }

    if(n % 2 != 0){
        cout << "I hate it" << " ";
    }
    else if(n % 2 == 0){
        cout << "I love it" << " ";
    }
    return 0;
}