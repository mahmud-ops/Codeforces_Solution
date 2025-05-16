#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<cstring>

using namespace std;
int main(){
    int inputCount;
    string word;
    cin >> inputCount;

    for(int i = 0 ; i < inputCount ; i++){
        cin >> word;
        int size = word.length();
        if (size > 10)
        {
            cout << word[0] << size-2 << word[size - 1] << endl;
        }
        else{
            cout << word << endl;
        }
    }
    return 0;
}