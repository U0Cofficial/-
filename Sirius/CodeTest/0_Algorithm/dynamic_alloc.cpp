
#include <iostream>
using namespace std;
typedef int* IntPtr;
int main(){
    
    IntPtr p;
    int size;
    cin >> size;
    p = new int[size];
    for(int i=0;i<size;i++){
        *(p+i)=i+1;
        cout << "p[" << i << "] =" << *(p+i) << endl; 
    }
    delete [] p;
    p = NULL;
    int** ptr;
    ptr = new int*[size];
    for(int j=0;j<size;j++){
        ptr[j] = new int[size];
        for(int k=0;k<size;k++){
            ptr[j][k]=0;
            cout << "p[" << j << "][" << k <<"]=" << ptr[j][k] << endl;
        }
    }
    for(int i=0;i<size;i++){
        delete [] ptr[i];
    }
    delete [] ptr;
    ptr = NULL;


    return 0;
}