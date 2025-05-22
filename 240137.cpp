#include<iostream>

using namespace std;
class digit_count{
    double digit;

    public:
        digit_count(double digit){
            this->digit = digit;
        }

        void dig_count(){
            int beforeDecimal = 0;
            int integer = int(digit);

            if(integer == 0){
                beforeDecimal = 1;
            }
            else{
                while (integer)
                {
                    integer /= 10;
                    beforeDecimal++;
                }
            }
            
            double fraction = digit - (int)digit;
            int afterDecimal = 0;
            
            while(fraction != 0){
                fraction *= 10;
                fraction -= (int)fraction;
                afterDecimal++;
            }

            cout << beforeDecimal << " digits before decimal point. \n";
            cout << afterDecimal << " digits after decimal point. \n";
        }
};
int main(){

    double input;

    cin >> input;

    digit_count num_1(input);
    num_1.dig_count();

    return 0;
}