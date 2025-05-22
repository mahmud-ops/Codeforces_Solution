#include<iostream>

using namespace std;

class digit_count {
    double digit;

public:
    digit_count(double digit) {
        this->digit = digit;
    }

    void dig_count() {
        int beforeDecimal = 0;
        int integer = int(digit);

        if (integer == 0) {
            beforeDecimal = 1;
        } else {
            while (integer) {
                integer /= 10;
                beforeDecimal++;
            }
        }

        cout << beforeDecimal << endl;

        double fraction = digit - (int)digit;
        int afterDecimal = 0;

        while (fraction != 0 && afterDecimal < 15) {
            fraction *= 10;
            fraction -= (int)fraction;
            afterDecimal++;
        }

        cout << afterDecimal << endl;
    }
};

int main() {
    digit_count num_1(123.234);
    num_1.dig_count();

    return 0;
}
