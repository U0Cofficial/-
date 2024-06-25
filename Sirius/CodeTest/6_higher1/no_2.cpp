#include <iostream>
#include <queue>
using namespace std;
int main(){
    int a[6] = {1,1,2,2,2,8};
    queue<int> chess;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        chess.push(a[i]);
    }
    int num;
    while(!chess.empty())
    {
        cin >> num;
        cout << chess.front() - num << ' ';
        chess.pop();
    }    
    
    return 0;
}