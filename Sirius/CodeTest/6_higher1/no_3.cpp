#include <iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    for(int i=1;i<2*n;i+=2){
        for(int j=0;j<(n-((i+1)/2));j++) cout << " ";
        for(int k=0;k<i;k++) cout << "*";
        cout << endl;
    }
    for(int i=2*n-3;i>0;i-=2){
        for(int j=0;j<(n-((i+1)/2));j++) cout << " ";
        for(int k=0;k<i;k++) cout << "*";
        cout << endl;
    }

    return 0;
}