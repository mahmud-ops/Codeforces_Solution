#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin >> n;

    int p[n + 1];
    int gift[n + 1];

    for(int i = 1 ; i <= n ; i++){
        cin >> p[i];
        gift[p[i]] = i;
    }

    for(int i = 1 ; i <= n ; i++){
        cout << gift[i] << " ";
    }


    
    return 0;
}