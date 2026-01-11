#include<bits/stdc++.h>
using namespace std;
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
}
//linear search
void linearSearch(int arr[],int n,int key){
    bool f=false;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"Element found at"<<i<<'\n';
            f=true;
            break;
        }
    }
    if(!f)
    cout<<"Element not found";
}
int main(){
    int marks[5]={1,2,3,4,5};
    cout<<sizeof(marks)<<endl;//20 //each 4 bytes
    int len=sizeof(marks)/sizeof(int);
    cout<<"Length of array="<<len<<endl;//5
    //indexing
    cout<<marks[3]<<endl;//4 // indexing starts from 0
    //printing elements of array
    for(int i=0;i<len;i++){
        cout<<marks[i]<<" ";
    }
    cout<<"\n";
    int n;
    cout<<"enter length of array= ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array elements are ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    //largest and smallest elements of array 
    int arr1[]={7,2,4,19,6};
    int x=sizeof(arr1)/sizeof(int);
    int L=arr1[0];
    int S=arr1[0];
    for(int i=0;i<x;i++){
        if(arr1[i]>L){
            L=arr1[i];
        }
        if(arr1[i]<S){
            S=arr1[i];
        }
    } 
    cout<<"Largest no. in array="<<L<<endl;
    cout<<"Smallest no. in array="<<S<<endl;
    //arrays are passed by reference
    int a[]={2,4,6,8,10};
    cout<<*a<<endl;//a[0]
    cout<<*(a+1)<<endl;//a[1]
    cout<<*(a+2)<<endl;//a[2]
    printArr(a,5);

    //linear search
    int arr2[]={7,18,3,9,4};
    int key = 3;
    linearSearch(arr2,5,key);
    //reverse an array
    int aray[]={1,2,3,4,5};
    int rev[5];
    n=5;
    for(int i=0;i<n;i++){
        int j=n-i-1;
        rev[i]=aray[j];
    }
    printArr(rev,5);
    //using 2 ptr - reverse an array
    int f=0;
    int b=n-1;
    for(int i=0;i<n/2;i++){
        swap(aray[f],aray[b]);
        f++;
        b--;
    }
    printArr(aray,5);
}