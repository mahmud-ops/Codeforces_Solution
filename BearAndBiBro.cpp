<<<<<<< HEAD
//Bear and Bigbro
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int  a , b , i;
    cin >> a >> b;

    for(i = 1 ; i < 100 ; i++){
        a *= 3;
        b *= 2;
        if(a > b){
            break;
        }
    }  
    cout << i;  
    return 0;
=======
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int  a , b , i;
    cin >> a >> b;

    for(i = 1 ; i < 100 ; i++){
        a *= 3;
        b *= 2;
        if(a > b){
            break;
        }
    }  
    cout << i;  
    return 0;
>>>>>>> 60b6bbf05c339b6dcd34da7799eed6650df9eeac
}