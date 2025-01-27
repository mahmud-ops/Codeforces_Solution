#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int statement , X = 0;
    cin >> statement;
    for(int i = 0 ; i < statement ; i ++){
        string operaiton;
        cin >> operaiton;
        if (operaiton == "X++")
        {
            X++;
        }
        else if (operaiton == "++X")
        {
            ++X;
        }
        else if (operaiton == "--X")
        {
            --X;
        }
        else if (operaiton == "X--")
        {
            X--;
        }  
    }

    cout << X;
    return 0;
}