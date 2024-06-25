#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::find;
using std::cin;
using std::cout;
using std::endl;
// using std::sort;
int main(){
    int array1[]={53,23,12,69,34,19};
    vector<char> line;
    vector<int> v1(array1,array1+5);
    cout << "text any sentence:" ;
    char next;
    cin.get(next);
    while(next!='\n'){
        line.push_back(next);
        cin.get(next);
    }
    vector<char>::iterator pos;
    pos=find(line.begin(),line.end(),'e');
    for(vector<char>::iterator i=line.begin();i!=pos;i++){
        cout << *i ;
    }
    
    std::sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << ' ';
    }


    return 0;
}