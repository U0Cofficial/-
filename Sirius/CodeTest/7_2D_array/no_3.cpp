#include <iostream>
#include <string>
using namespace std;
int main(){

    string input_str;
    string bucket[15];
    int bucket_idx = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> input_str;
        for(string::iterator iter = input_str.begin(); iter!=input_str.end();iter++){
            bucket[bucket_idx].push_back(*iter);
            bucket_idx++;
        }
        bucket_idx = 0;    
    }
    for(int j = 0; j < 15; j++){
        cout << bucket[j];
    }
    return 0;
}