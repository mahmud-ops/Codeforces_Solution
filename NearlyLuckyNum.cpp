#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    string n;
    cin >> n;
    int c = 0 , sum = 0;
    for(int i = 0 ; i < n.length() ; i++){
        if(n[i] == '7' || n[i] == '4'){
            c++;
        }
    }
    
   
    if(c == 7 || c == 4){
        cout << "YES" << endl;
    }            
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}