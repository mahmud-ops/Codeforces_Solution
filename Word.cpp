#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    string s;
    cin >> s;

    int lowCount = 0 , upCount = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(islower(s[i])){
            lowCount++;
        }
        else if(isupper(s[i])){
            upCount++;
        }
    }
    if(upCount > lowCount){
        for(int i = 0 ; i < s.length() ; i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0 ; i < s.length() ; i++){
            s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}
