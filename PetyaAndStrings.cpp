<<<<<<< HEAD
#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string str_1, str_2;
    cin >> str_1 >> str_2;

    for (int i = 0; i < str_1.length(); i++) {
        str_1[i] = tolower(str_1[i]);
    }

    for (int i = 0; i < str_2.length(); i++) {
        str_2[i] = tolower(str_2[i]);
    }

    if (str_1 < str_2) {
        cout << -1;
    } else if (str_1 > str_2) {
        cout << 1;
} else {
        cout << 0;
    }

    return 0;
}
=======
#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string str_1, str_2;
    cin >> str_1 >> str_2;

    for (int i = 0; i < str_1.length(); i++) {
        str_1[i] = tolower(str_1[i]);
    }

    for (int i = 0; i < str_2.length(); i++) {
        str_2[i] = tolower(str_2[i]);
    }

    if (str_1 < str_2) {
        cout << -1;
    } else if (str_1 > str_2) {
        cout << 1;
} else {
        cout << 0;
    }

    return 0;
}
>>>>>>> 22fcbaa980592607c5d1b75564bbf41cb3637343
