// // //class, namespace, filesystem
#include <iostream>
using namespace std;
long long n;
int gcd(long long n1, long long n2){
    int tmp1 = min(n1,n2), tmp2 = max(n1,n2);
    if(tmp1 == 0) return tmp2;
    return gcd(tmp1,tmp2%tmp1);
}
int main(){
    
    long long m; cin >> n >> m;
    if(min(n,m) == 1){
        cout << max(n,m); exit(0);
    }
    cout << (n * m) / gcd(n,m);
    return 0;
}
