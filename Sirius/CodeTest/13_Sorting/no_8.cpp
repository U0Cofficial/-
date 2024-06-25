// // //class, namespace, filesystem
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
pair<int,int> p;
vector<pair<int,int>> v;
bool compare(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;

}
int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p.first >> p.second; v.push_back(p);
    }
    sort(v.begin(), v.end(), compare);
    for(auto& i:v){
        cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}
