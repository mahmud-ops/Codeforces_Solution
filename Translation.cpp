#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<string.h>

using namespace std;
int main(){
    string ber , bir;
    cin >> ber >> bir;

    for(int s = 0 , e = bir.length() - 1;
            s < bir.length()/2 ;
            s++ , e--){
        int temp = bir[s];
            bir[s] = bir[e];
            bir[e] = temp;
    }

    if(ber == bir){
        cout << "YES"; 
    }
    else{
        cout << "NO";
    }
    return 0;
}