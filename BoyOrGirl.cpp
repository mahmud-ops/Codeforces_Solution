<<<<<<< HEAD
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<cctype>
#include<algorithm>

using namespace std;
int main(){
    string name;
    cin >> name;
    bool seen[26] = {false};
    int distinctCount = 0;

    transform(name.begin() , name.end() , name.begin() , ::tolower);
     
    for(int i = 0 ; name[i] != '\0' ; i++){
        if(!seen[name[i] - 'a']){
            seen[name[i] - 'a'] = true;
            distinctCount++;
        }
    }

    if(distinctCount % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
=======
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<cctype>
#include<algorithm>

using namespace std;
int main(){
    string name;
    cin >> name;
    bool seen[26] = {false};
    int distinctCount = 0;

    transform(name.begin() , name.end() , name.begin() , ::tolower);
     
    for(int i = 0 ; name[i] != '\0' ; i++){
        if(!seen[name[i] - 'a']){
            seen[name[i] - 'a'] = true;
            distinctCount++;
        }
    }

    if(distinctCount % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
>>>>>>> 60b6bbf05c339b6dcd34da7799eed6650df9eeac
}