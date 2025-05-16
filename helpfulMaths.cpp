#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    string numbers;
    cin >> numbers;

    vector<int> nums;

    for(int i = 0 ; i < numbers.size() ; i++){
        if(numbers[i] != '+'){
            nums.push_back(numbers[i] - '0');
        }
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) cout << "+";
        cout << nums[i];
    }

    return 0;
}