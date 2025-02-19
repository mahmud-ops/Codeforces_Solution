#include<iostream>
#include<cctype>

using namespace std;
int main(){
    int n;
    cin >> n;
    string players;
    int a = 0 , d = 0;
    cin >> players;
    for(int i = 0 ; i < n ; i++){
        players[i] = toupper(players[i]);
        if(players[i] == 'A'){
            a++;
        }
        else if(players[i] == 'D'){
            d++;
        }
    }
    
    if(a > d){
        cout << "Anton";
    }
    else if(d > a){
        cout << "Danik";
    }
    else if(a == d){
        cout << "Friendship";
    }
    return 0;
}