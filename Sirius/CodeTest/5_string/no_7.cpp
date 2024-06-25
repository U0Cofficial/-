// 2
// 3 ABC
// 5 /HTP
// 예제 출력 1 
// AAABBBCCC
// /////HHHHHTTTTTPPPPP
/* 1. test_case 개수 입력 2. loop ctrl 반복횟수 및 문자열 입력 ( string str에 저장, 문자열 iterate후  pointer 연산으로
반복출력 vs string length loop로 idx연산 )3. 문자열 출력*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int test_case,iter_time;
    string str;
    cin >> test_case;
    for(int i=0;i<test_case;i++){
        cin >> iter_time >> str;
        for(string::iterator i=str.begin();i!=str.end();i++){
            
            for(int j=0;j<iter_time;j++){
                cout << (*i);
            }
            
        }
        cout << '\n';
    }
    return 0;
}