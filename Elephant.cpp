<<<<<<< HEAD
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int x;
    cin >> x;
    
    int quotient = x/5;
    int remainder = x%5;
    int steps = quotient;

    if(remainder > 0){
        steps = quotient + 1 ;
    }
    

    cout << steps;

    return 0;
=======
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    int x;
    cin >> x;
    
    int quotient = x/5;
    int remainder = x%5;
    int steps = quotient;

    if(remainder > 0){
        steps = quotient + 1 ;
    }
    

    cout << steps;

    return 0;
>>>>>>> 60b6bbf05c339b6dcd34da7799eed6650df9eeac
}