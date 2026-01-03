#include<bits/stdc++.h>
using namespace std;

//binary to decimal conversion
void binToDec(int binNo){
    int n=binNo;
    int decNo=0;
    int pow=1;
    while(n>0){
        int r=n%10;
        decNo+=r*pow;
        pow*=2;
        n/=10;
    }
    cout<<"decimal no.="<<decNo<<endl;
}

//decimal to binary conversion
void decToBin(int decNo){
    int n=decNo;
    int binNo=0;
    int pow=1;
    while(n>0){
        int r=n%2;
        binNo+=r*pow;
        pow*=10;
        n/=2;
    }
    cout<<"binary no.="<<binNo<<endl;
}

int main(){
    int b,d;
    cout<<"enter a binary no.="<<endl;
    cin>>b;
    cout<<"\nbinary to decimal=";
    binToDec(b);
    cout<<"\nenter a decimal no.="<<endl;
    cin>>d;
    cout<<"\nDecimal to binary=";
    decToBin(d);
}