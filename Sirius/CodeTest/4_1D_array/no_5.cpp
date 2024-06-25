#include <iostream>
using namespace std;
int main(){
    int idx,loop_time,start_idx,end_idx,ball_num;
    cin >> idx >> loop_time;
    int bucket[idx]={0,};
    for(int i=0;i<loop_time;i++){
        cin >> start_idx >> end_idx >> ball_num;
        for(int j=start_idx-1;j<end_idx;j++){
            bucket[j]=ball_num;
        }
    }
    for(int i=0;i<idx;i++){
        cout << bucket[i] << ' ';
    }
    return 0;
}