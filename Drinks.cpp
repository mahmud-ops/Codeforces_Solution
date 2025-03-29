#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n , per;
    double avg , sum = 0;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> per;
        sum += per;
    }

    avg =  sum / n;

    cout << avg;
    return 0;
}