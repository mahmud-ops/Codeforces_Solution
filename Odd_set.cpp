// Logic : Odd + odd = even
//         Even + Even = even
//         Even + Odd = Odd
// So , All of the sum of each pair can be odd if and only if the number of eveb and odd numbers are the same.
// Unless the extra odd/even number will be paired with a same type number.
// if oddCount == evenCount 1 2 3 4 5 6 => 1+2 3+4 5+6 = 3 7 11 (all odd)
// if oddCount != evenCount 1 2 8 4 5 6 => 1+2 5+4 8+6 = 3 9 18 (18 = even)

#include<iostream>

using namespace std;
int main(){

    int t,n,m;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        int o = 0,e = 0;
        cin >> n;
        for(int i = 0 ; i < 2*n ; i++){
            cin >> m;
            if(m % 2 == 0){
                e++;
            }
            else{
                o++;
            }
        }

        if(o==e){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    }

    

    return 0;
}
