#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    stack<int> st;
    priority_queue<int, vector<int>, less<int>> heap;

    for(int i=0;i<5;i++){
        st.push(i);
    }
    cout << st.top();
    int item;
    for(int j=0;j<5;j++){
        cin >> item;
        heap.push(item);
    }
    while(!heap.empty()){
        cout << heap.top() << endl;
        heap.pop();
    }
    return 0;
}