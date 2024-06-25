#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <map>
using namespace std;
int main(){
    
    string str;
    map<char,int> m;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=('a'-'A');
        }
    }
    for(int i=0;i<str.length();i++){
        m[str[i]]=0;
    }
    for(int i=0;i<str.length();i++){
        m[str[i]]++;
    }
    
    int max=(m.begin())->second;
    char max_ch=m.begin()->first;   
    
    for(map<char,int>::iterator it=m.begin();it!=m.end();it++){
        if((it->second )> max){
            max=it->second;
            max_ch=it->first;
            
        }
        else if(it!=m.begin() && (it->second ) == max){
            max_ch='?';
        }
    }
    
    cout << max_ch;
    return 0;
}