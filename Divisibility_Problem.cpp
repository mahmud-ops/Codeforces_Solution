#include<iostream>

using namespace std;
int main(){
    int t;
    cin >> t;

    int a , b;
    int count;
    for(int i = 0 ; i < t ; i++){
        cin >> a >> b ;
        int rem = a % b;
        count = b - rem;
        if(rem == 0){
            count = 0;
        }
        cout << count << endl;
    }

    return 0;
}