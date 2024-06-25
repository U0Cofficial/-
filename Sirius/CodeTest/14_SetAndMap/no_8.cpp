#include <iostream>
#include <set>
#include <string>
using namespace std;
int n;
int main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s; set<string> ps; cin >> s;
    for(int i = 1; i <= s.length(); i++){
        for(string::iterator it = s.begin(); it <= s.begin() + s.length() - i; it++){
            string temp(it,it+i); ps.insert(temp);
        }
    }
    cout << ps.size();
    return 0;
}
