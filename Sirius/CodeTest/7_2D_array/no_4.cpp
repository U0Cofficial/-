#include <iostream>
using namespace std;
int board[100][100] = {0,};
void board_marker(int rowIdx, int colIdx){
    for(int i = rowIdx; i < rowIdx+10; i++){
        for(int j = colIdx; j < colIdx + 10; j++){
            if(board[i][j] == 0) board[i][j] = 1;
        }
    }
}
int main(){
    
    int* testcase = new int;
    cin >> *testcase;
    
    int rowIdx,colIdx, cnt = 0;

    for(int i = 0; i < *testcase; i++){
        cin >> colIdx >> rowIdx;
        board_marker(rowIdx, colIdx);
    }
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(board[i][j]!=0){
                cnt++;
            }
        }
    }
    cout << cnt;
    delete testcase;
    testcase = NULL;
    return 0;
}