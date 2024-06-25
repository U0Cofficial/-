// // //class, namespace, filesystem
#include <iostream>
using namespace std;
int n;
void mergeSort(int, int, int, int(*) [2]);
void radixMerge(int, int, int, int, int(*) [2]);
int main(){

    cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; i++) cin >> arr[i][0] >> arr[i][1];
    mergeSort(0,n-1,1,arr);
    mergeSort(0,n-1,0,arr);
    for(int i = 0; i < n; i++) cout << arr[i][0] <<' ' << arr[i][1] << '\n';

    return 0;
}
void mergeSort(int start, int end, int d, int(* arr)[2]){
    if(end > start){
        int mid = (start + end) / 2;
        mergeSort(start,mid,d,arr);
        mergeSort(mid+1,end,d,arr);
        radixMerge(start,mid,end,d,arr);
    }
}
void radixMerge(int start, int mid, int end, int d, int(* arr)[2]){
    int m = 0, n = 0, k = 0;
    int temp[end-start+1][2]; int left[mid-start+1][2]; int right[end-mid][2];
    for(int i = start; i <= mid; i++){
        left[m][0] = arr[i][0]; left[m][1] = arr[i][1]; m++;
    } 
    m = 0;
    for(int i = mid+1; i <= end; i++){
        right[n][0] = arr[i][0]; right[n][1] = arr[i][1]; n++;
    }
    n = 0;

    while((m < (mid - start + 1)) && (n < (end - mid))){
        if( left[m][d] > right[n][d]){
            temp[k][0] = right[n][0]; temp[k][1] = right[n][1]; n++; k++;
        }
        else{
            temp[k][0] = left[m][0]; temp[k][1] = left[m][1]; m++; k++;
        }
    }
    if( m < (mid -start +1)){
        while( m < mid -start +1){
            temp[k][0] = left[m][0]; temp[k][1] = left[m][1]; k++; m++;
        }
    }
    else{
        while( n < end - mid){
            temp[k][0] = right[n][0]; temp[k][1] = right[n][1]; k++; n++;
        }
    } k = 0;
    for(int i = start; i <= end; i++){
        arr[i][0] = temp[k][0]; arr[i][1] = temp[k][1]; k++;
    }
}
