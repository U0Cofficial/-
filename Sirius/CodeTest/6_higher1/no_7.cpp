#include <iostream>
using namespace std;
#include <string>
bool ifUnAuthorized(char key,string unAuthorized){
    for(int i = 0; i < unAuthorized.length(); i++){
        if (unAuthorized[i] == key) return true;
    }
    return false;
}
int main(){

    int num;
    cin >> num;
    string* words = new string [num];
    for(int i =0; i < num; i++){
        cin >> words[i];
    }

    char key;
    bool g_word = true;
    int g_words = 0;
    string unAuthorized ="";
    for(int i =0; i < num; i++){
        for(int j = 0; j < words[i].length(); j++){
            if ( j == 0 ){
                key = words[i][j];
                continue;            
            }
            if ( words[i][j] != key ){
                if(ifUnAuthorized(words[i][j],unAuthorized)) {
                    g_word = false;
                    break;
                }
                unAuthorized += key;
                key = words[i][j];
            }
        }
        if ( g_word ) g_words ++;
        g_word = true;
        unAuthorized = "";
        
    }
    cout << g_words;
    return 0;
}