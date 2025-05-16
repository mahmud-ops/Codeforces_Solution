#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int problems;
    cin >> problems;
    int correctionCount = 0;

    for(int i = 0 ; i < problems ; i ++){
        int p,v,t;
        cin >> p >> v >> t;

        if (p == 1)
        {
            if (v == 1 || t == 1)
            {
                correctionCount++;
            }
        }
        else if (v == 1)
        {
            if (p == 1 || t == 1)
            {
                correctionCount++;
            }
        }
        else if (t == 1)
        {
            if (p == 1 || v == 1)
            {
                correctionCount++;
            }
        }
        
    }
    cout << correctionCount;
    return 0;
}