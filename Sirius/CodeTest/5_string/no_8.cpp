// he Curious Case of Benjamin Button
// 예제 출력 1 
// 6

// 단어의 구분을 어떻게 ..
/* false start 
단어를 만나고 ->true 공백을 만나면 ->  count ++ false
*/
#include <iostream>
#include <string>
using namespace std;
int main(){

    string str;
    bool counter=false;
    int cnt=0;
    getline(cin,str);
    for(string::iterator i=str.begin();i!=str.end();i++){
        if(*i!=' ' && counter == false){
            counter=true;
        }
        if(*i == ' ' && counter == true){
            cnt++;
            counter=false;
        }

    }
    if(counter) cnt++;
    cout << cnt;
    return 0;
}