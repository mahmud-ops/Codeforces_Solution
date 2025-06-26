#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int stones[100];

        int min_ind;
        int max_ind;
        
        for(int i = 0 ; i < n ; i++){
            cin >> stones[i];
            if(stones[i] == 1){
                min_ind = i;
            }
            if(stones[i] == n){
                max_ind = i;
            }
        }

        if(min_ind > max_ind)swap(min_ind,max_ind);

        int o1 = max(max_ind,min_ind) + 1;
        int o2 = max(n-max_ind,n-min_ind);
        int o3 = (min_ind+1)+(n - max_ind);

        cout << min({o1,o2,o3}) << endl;
    }
    
    return 0;
}