#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin >> n;

    int a , b;
    int pass = 0,max_cap = 0;
   
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        cin >> b;

        pass -= a;
        pass += b;
        
        max_cap = max(pass , max_cap);
    }

    cout << max_cap;
    return 0;
}