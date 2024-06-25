#include <iostream>
#include <algorithm>
using namespace std;
typedef int* IntPtr;
void merge(int arr[],int s,int m,int e){
    int i,j,k;
    int n1=m-s+1;
    int n2=e-m;
    IntPtr p1,p2;
    p1=new int[n1];
    p2=new int[n2];

    for(i=0;i<n1;i++){
        p1[i]=arr[s+i];
    }
    for(j=0;j<n2;j++){
        p2[j]=arr[m+1+j];
    }
    i=0,j=0,k=s;

    while(i<n1 & j<n2){
        if(p1[i]<p2[j]){
            arr[k]=p1[i];
            k++,i++;
        }
        else{
            arr[k]=p2[j];
            k++,j++;
        }
    }
    while(i<n1){
        arr[k]=p1[i];
        k++,i++;
    }
    while(j<n2){
        arr[k]=p2[j];
        k++,j++;
    }

    delete [] p1;
    delete [] p2;
    p1=NULL;
    p2=NULL;
    return;
}
void mergeSort(int arr[],int s,int e){
    if(s<e){
        int m=(s+e)/2;
        mergeSort(arr,s,m);
        mergeSort(arr,m+1,e);
        merge(arr,s,m,e);
    }
    return;
}
int partition(int arr[],int s,int e,int pivot){
    int i;
    /*for the randomized index*/
    for(i=s;i<e;i++){
        if(arr[i]==pivot){
            break;
        }
    }
    swap(arr[i],arr[e]);
    i=s;
    for(int j=i;j<=e-1;j++){
        if(arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[e],arr[i]);

    return i;
}
void quickSort(int arr[],int s,int e){
    if(s<e){
        int pivot=arr[e];
        int pos=partition(arr,s,e,pivot);

        quickSort(arr,s,pos-1);
        quickSort(arr,pos+1,e);
    }
}
int main(){
    int arr[8]={23,5,35,9,34,98,5,12};
    int list[8]={23,5,35,9,34,98,5,12};
    mergeSort(arr,0,7);
    quickSort(list,0,7);
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
    for(int i=0;i<sizeof(list)/sizeof(int);i++){
        cout << list[i] << ' ';
    }
    return 0;
}