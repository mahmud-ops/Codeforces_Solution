#include<iostream>

using namespace std;

class digit_count{
    string digit;

    public:
        digit_count(string digit){
            this -> digit = digit;
        }

        int before = 0;
        int after = 0;
        void dig_count(){
            for(int i = 0 ; i < digit.length() ; i++){
                
                before++;

                if(digit[i] == '.'){
                    break;
                }
            }

            for(int j = digit.length() - 1 ; j >= 0 ; j--){
                
                after++;

                if(digit[j] == '.'){
                    break;
                }
            }
        }

        void dig_count(){
            cout << before << " digits before decimal point. \n";
            cout << after << " digits aftre decimal point. \n";
        }
};

int main(){
    string input;
    cin >> input;

    digit_count num_1(input);
    num_1.dig_count();

    return 0;
}