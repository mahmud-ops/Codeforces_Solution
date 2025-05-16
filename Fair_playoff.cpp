#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;
int main(){

    int t , a[4];
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin >> a[j];
        }

        int sem_1 = max(a[0] , a[1]);
        int sem_2 = max(a[2] , a[3]);
        sort(a,a+4);

        int top_1 = a[3];
        int top_2 = a[2];

        if((sem_1 == top_1 || sem_1 == top_2) && (sem_2 == top_1 || sem_2 == top_2)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}