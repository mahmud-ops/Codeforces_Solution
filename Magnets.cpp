#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin >> n;

    int prev , curr , magCount = 1;
    cin >> prev;
    for (int i = 1; i < n; i++){
        cin >> curr;
        if(curr != prev){
            magCount++;
        }
        prev = curr;
    }
    cout << magCount;

    return 0;
}