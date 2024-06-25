#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){

    string str;
    cin >> str;
    string s[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int croc_idx;
    for(int i=0;i<8;i++){
        
        while(str.find(s[i])!=string::npos){
            
        if(s[i]=="dz="){
            str.replace(str.find(s[i]),3,"_");
        }
        else{
            str.replace(str.find(s[i]),2,"_");
        }
        }
    }
    
    cout << str.length();


    return 0;
}