#include<bits/stdc++.h>
using namespace std;

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
}
