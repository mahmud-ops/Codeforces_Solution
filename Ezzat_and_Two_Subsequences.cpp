#include<iostream>
#include<vector>
#include<climits>
#include<iomanip>

using namespace std;
int main(){

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector <int> arr;
    
    long long sum = 0;
    int max_val = INT_MIN;
    for(int i = 0 ; i < n ; i++){
      int element;
      cin >> element;
      if(element > max_val){
        max_val = element;
      }
      arr.push_back(element);
      sum += element;
    }

     double fa = (double)max_val;
     double fb = (double)(sum - max_val) / (n - 1); 

     double res = fa + fb;

     cout << fixed << setprecision(9) << res << endl;
  }
  

  return 0;
}