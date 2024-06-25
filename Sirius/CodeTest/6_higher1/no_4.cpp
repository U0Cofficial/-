#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    
    string str;
    stack<char> spell;
    cin >> str;
    for(string::iterator it = str.begin();it!=str.end();it++){
        spell.push(*it);
    }
    int i=0;
    while(!spell.empty()){
        if(spell.top()==str[i]){
            spell.pop();
            i++;
            continue;
        }
        else{
            cout << 0;
            return 0;
        }

    }
    cout << 1;

    
    return 0;
}