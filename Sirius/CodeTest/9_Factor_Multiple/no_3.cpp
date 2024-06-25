#include <iostream>
#include <vector>
using namespace std;
void solve(){
    vector<int> factors;
    vector<int>::iterator iter;
    int num, cnt = 0;
    while(1){
        cin >> num;
        if(num < 0) break;
        for(int i = 1; i < num; i++){
            if (num % i == 0) factors.push_back(i); 
        }
        for(iter = factors.begin(); iter!= factors.end(); iter++){
            cnt += *iter;
        }
        if (cnt == num) {
            cout << num <<" = "; 
            for(int j = 0; j < factors.size(); j++){
                if(j==(factors.size()-1)) cout << factors[j] << '\n';
                else cout << factors[j] << " + ";
            }
        }
        else cout << num << " is NOT perfect.\n";
        factors.clear();
        cnt = 0;
    }
    return;
}
int main(){

    solve();

    return 0;
}