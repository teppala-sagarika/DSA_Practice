#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,4,1,2,3};
    int n=5;
    //before sorting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    //selection sort
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[minIdx],arr[i]);
    }
    //after sorting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}