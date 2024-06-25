#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    
    vector<int> v1;
    
    for(int i=0;i<3;i++){
        v1.push_back(i+1);
    }
    for(vector<int>::iterator i=v1.begin();i!=v1.end();i++){
        cout << *i << ' ';
    }
    cout << endl << v1[0];


    return 0;
}