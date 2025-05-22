#include<iostream>
#include<string>

using namespace std;
int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        bool seen = false;
        for(int i = 1 ; i < n ; i++){

            if(s[i] != s[i - 1]){

                for(int j = 0 ; j < i ; j++){
                    if(s[i] == s[j]){
                        seen = true;
                    }
                }
            }
        }

        if(!seen){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    

    return 0;
}