#include<iostream>

using namespace std;
class digit_count{
    string digit;

    public:
        digit_count(string newDigit){
            digit = newDigit;
        }

        ~digit_count(){
            digit = '0';
        }

    void dig_count(){
        int beforePoint = 0;
        for(int i = 0 ; i < digit.length() ; i++){
            beforePoint++;
            if(digit[i] == '.'){
                break;
            }
        }

        int afterPoint = 0;
        for(int i = digit.length() - 1 ; i > 0 ; i--){
            afterPoint++;
            if(digit[i] == '.'){
                break;
            }
        }


        cout << beforePoint - 1<< " digits before decimal point.\n";
        cout << afterPoint - 1<< " digits before decimal point.\n";
    }
};
int main(){

    digit_count num_1("12467.345");
    num_1.dig_count();

    return 0;
}