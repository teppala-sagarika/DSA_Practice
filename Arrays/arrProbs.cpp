#include<bits/stdc++.h>
using namespace std;

//max subarray sum (BRUTE FORCE)
int maxSubArrSum1(int *arr,int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){//start
        for(int j=i;j<n;j++){//end
            int curSum=0;
            for(int k=i;k<=j;k++){
                curSum+=arr[k];
            }
            maxSum=max(maxSum,curSum);         
        }
    }
    return maxSum; 
}

//max subarray sum (BRUTE FORCE optimized)
int maxSubArrSum2(int *arr,int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){//start
        int curSum=0;
        for(int j=i;j<n;j++){//end
            curSum+=arr[j];
            maxSum=max(maxSum,curSum);         
        }
    }
    return maxSum; 
}

//max subarray sum - kadane's algorithm
int kadanesAlgo(int *arr,int n){
    int maxSum=INT_MIN;
    int curSum=0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        maxSum=max(maxSum,curSum);
        if(curSum<0){
            curSum=0;
        }
    }
    return maxSum;
}

int main(){
//print subarrays
int arr[]={1,2,3,4,5};
cout<<"Subbarrays are =\n";
for(int i=0;i<5;i++){//start
    for(int j=i;j<5;j++){//end
        for(int k=i;k<=j;k++){
        cout<<arr[k];
        }
        cout<<" ";
    }
    cout<<"\n";
}
cout<<"Printing subarrays faster\n";
//this takes O(n^3)
//but we can do it even faster i.e O(n^2) if we use strings
for(int i=0;i<5;i++){
    string subStr="";
    for(int j=i;j<5;j++){
        subStr+=to_string(arr[j])+" ";
        cout<<subStr<<endl;
    }
}
int a[]={2,-3,6,-5,4,2};
//max subarray sum (BRUTE FORCE)
cout<<"max subarray sum (BRUTE FORCE)= ";
cout<<maxSubArrSum1(a,6)<<endl;
//max subarray sum (BRUTE FORCE optimized) 
cout<<"max subarray sum (BRUTE FORCE optimized) = ";
cout<<maxSubArrSum2(a,6)<<endl;
//kadane's algorithm
cout<<"max subarray sum (kadane's algorithm) =";
cout<<kadanesAlgo(a,6)<<endl;
}
