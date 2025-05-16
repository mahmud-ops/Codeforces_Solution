<<<<<<< HEAD
//Stones on the table
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int take = 0;

    for(int i = 0 ; i < n-1; i++){
        if(s[i] == s[i + 1]){
            take++;
        }
    }
    cout << take;
    return 0;
=======
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int take = 0;

    for(int i = 0 ; i < n-1; i++){
        if(s[i] == s[i + 1]){
            take++;
        }
    }
    cout << take;
    return 0;
>>>>>>> 60b6bbf05c339b6dcd34da7799eed6650df9eeac
}