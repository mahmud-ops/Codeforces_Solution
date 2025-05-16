#include<iostream>
#include<vector>

using namespace std;
int main(){

    int t , n;
    cin >> t;

    vector<int> num;

    for(int i = 0 ; i < 1000 ; i++){
        if(i%3 == 0 || i%10 == 3){
            continue;
        }
        else{
            num.push_back(i+1-1);
        }
    }

    for(int i = 0 ; i < t ; i++){
        cin >> n;
        cout << num[n-1] << endl;
    }

    return 0;
}