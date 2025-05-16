#include<iostream>

using namespace std;
int main(){

    int t , n , a[1000];
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> n;
        int sum = 0;
        for(int j = 0 ; j < n ; j++){
            cin >> a[j]; 
            sum += a[j];
        }
        if(sum < n){
            cout << 1 << endl;
        }
        else if(sum == n){
            cout << 0 << endl;
        }
        else{
            cout << sum - n << endl;
        }
        
    }
    
    
    return 0;
}