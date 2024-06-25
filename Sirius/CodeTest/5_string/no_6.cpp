// baekjoon
// 예제 출력 1 
// 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
#include <iostream>
#include <string>
using namespace std;
int main(){

    string str;
    int alpha[26];
    for(int i=0;i<24;i++){
        alpha[i]=-1;
    }
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(alpha[str[i]-'a']==-1) alpha[str[i]-'a']=i;
    }
    for(int i=0;i<sizeof(alpha)/sizeof(int);i++){
        cout << alpha[i] << ' ';
    }
    return 0;
}