#include <iostream>
#include <vector>
using namespace std;
int n;
int main(){

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    int arr[n];
    for(auto& i: arr){
        cin >> i;
    }
    // countingSort
    int count[10000] = {0,};
    int idx = 0;
    for(int i = 0; i < n; i++){
        count[arr[i]-1]++;
    }
    for(int k = 0; k < 10000; k++){
        while(count[k]>0){
            arr[idx++] = k+1;
            count[k]--;
        }
        if(idx == n) break;
    }
    for(auto& i:arr){
        cout << i << '\n';
    }
    return 0;
}