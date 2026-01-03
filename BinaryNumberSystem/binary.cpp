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

//adding 2 binary no.s
void addBin(int b1, int b2)
{
    int c = 0;
    int ans = 0;
    int pow = 1;

    while (b1 > 0 || b2 > 0)
    {
        int r1 = b1 % 10;
        int r2 = b2 % 10;

        b1 /= 10;
        b2 /= 10;

        int s = r1 + r2 + c;

        if (s == 0 || s == 1) {
            ans += pow * s;
            c = 0;
        }
        else if (s == 2) {
            ans += pow * 0;
            c = 1;
        }
        else { // s == 3
            ans += pow * 1;
            c = 1;
        }
        pow *= 10;   
    }

    if (c == 1) {
        ans += pow; // add final carry 
    }

    cout << "sum = " << ans << endl;
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
    int b1,b2;
    cout<<"\nprovide 2 binary no.s=";
    cin>>b1>>b2;
    addBin(b1,b2);
}