#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    //cin.sync_with_stdio(false);
    int n,m,temp;
    cin >> n >> m;
    int** a = new int*[n];

    for(int i = 0; i<n;i++){
        a[i] = new int[m];
        //a + i = new int[m]; -> why
    }
    for(int i = 0; i < 2*n; i++){
        if (i < n){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        else{
            for(int j = 0; j < m; j++){
                cin >> temp;
                a[i-n][j] += temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (j == m-1) cout << a[i][j] << '\n';
            else cout << a[i][j] << ' ';
        }
    }
    for(int i = 0; i < n; i++){
        delete[] a[i];
    }
    delete[] a;

    return 0;
}