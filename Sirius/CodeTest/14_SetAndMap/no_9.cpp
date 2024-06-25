// // //class, namespace, filesystem
#include <iostream>
#include <set>
#include <cmath>
using namespace std;
int n;
int gcd(int tmp1, int tmp2){
    int mx = 1;
    int a = min(tmp1,tmp2); int b = max(tmp1,tmp2);
    set<int> acd;
    for(int i = 2; i <= a/2; i ++){
        if(a%i == 0) acd.insert(i);
    } acd.insert(a);
    if(acd.find(b) != acd.end()) return b;
    for(int i = b/2; i > 1; i--){
        if(b%i == 0){
            if(acd.find(i) != acd.end()){
                mx = i; break;
        }
        }
    }
    return mx;
}
int main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin >> n; int tmp1, tmp2;
    while( n > 0 ){
        cin >> tmp1 >> tmp2;
        if(tmp1 == 1 || tmp2 == 1){
            cout << max(tmp1,tmp2) << '\n';
            n--; continue;
        }
        cout << (tmp1*tmp2)/gcd(tmp1,tmp2) << '\n';
        n--;
    }
    return 0;
}
