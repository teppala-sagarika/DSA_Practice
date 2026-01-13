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

//buy and sell
int buyAndSell(int *arr,int n){
    int buy[6];
    buy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        buy[i]=min(buy[i-1],arr[i-1]);
    }
    int prof=0;
    for(int i=0;i<n;i++){
        prof=max(prof,arr[i]-buy[i]);
    }
    return prof;
}

//trapping rain water
int trapWater(int *ht,int n){
    int left[n];
    int ryt[n];
    left[0]=INT_MIN;
    ryt[n-1]=INT_MIN;
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],ht[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        ryt[i]=max(ryt[i+1],ht[i+1]);
    }
    int s=0;
    for(int i=1;i<=n-2;i++){
       int storage=min(left[i],ryt[i])-ht[i];
       if(storage>0){
        s+=storage;
       }
    }
    return s;
}

//search in rotated sorted array
int search(int *nums,int n, int target) {
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
                if(nums[low]<=nums[mid]){//left sorted 
                if(nums[low]<=target && nums[mid]>target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                }
                else{
                    if(nums[mid]<target && nums[high]>=target){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
        }
        return -1;
    }

//max prod sub arr
int maxProdSubArr(int *nums,int n){
       int pre=1;
       int suf=1;
       int maxProd=INT_MIN;
       for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre*=nums[i];
        suf*=nums[n-1-i];
        maxProd=max(maxProd,max(pre,suf));
       } 
       return maxProd;
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

//buy and sell stocks (max profit must be returned)
cout<<"Best buy and sell to get max profit=";
int prices[]={7,1,5,3,6,4};
cout<<buyAndSell(prices,6)<<endl;

//trapping rain water
int hts[]={4,2,0,6,3,2,5};
cout<<"water trapped=";
cout<<trapWater(hts,7)<<endl;

//search in rotated sorted array
int nos[]={4,5,6,7,0,1,2};
int target=0;
cout<<"search in rotated sorted array=";
cout<<search(nos,7,target)<<endl;

//maximum product subarray
int nums[]={2,3,-2,4};
cout<<"maximum product subarray=";
cout<<maxProdSubArr(nums,4)<<endl;

}
