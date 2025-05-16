#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int matrix[5][5];
    
for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
        }
    }

int pos_i , pos_j;
bool found = false;
        for(int i = 0 ; i < 5 ; i++){
            for(int j = 0 ; j < 5 ; j++){
                if(matrix[i][j] == 1){
                    pos_i = i;
                    pos_j = j;
                    found = true;
                break;
                }
            }
        }

int moves = abs(pos_i - 2) + abs(pos_j - 2);
cout << moves << endl;
return 0;
}