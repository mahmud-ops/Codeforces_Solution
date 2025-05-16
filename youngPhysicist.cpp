#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int n;
    cin >> n;
    int coordinates[n][3];
    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> coordinates[i][j];
            if(j == 0){
                sumX += coordinates[i][j];
            }
            if(j == 1){
                sumY += coordinates[i][j];
            }
            if(j == 2){
                sumZ += coordinates[i][j];
            }
        }
    }



    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}