#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    vector<int> factors;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        if(n%i == 0) factors.push_back(i);
    }
    if ( k > factors.size()) cout << 0;
    else{
        cout << factors[k-1];
    }
    return 0;
}