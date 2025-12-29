#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //nested loops
    cout<<"nested loops"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    //star pattern
    cout<<"star pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    //inverted star pattern
    cout<<"inverted star pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //half pyramid pattern
    cout<<"half pyramid pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    //character pyramid pattern
    cout<<"character pyramid pattern"<<endl;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    //hollow rectangle pattern 
    cout<<"hollow rectangle pattern"<<endl;
    for(int i=1;i<=n;i++){
        cout<<'*';
            for(int j=1;j<=n-1;j++){
                if(i==1||i==n)
                cout<<'*';
                else
                cout<<' ';
            }
        cout<<'*'<<endl;
    }
    //inverted and rotated half pyramid
    cout<<"inverted and rotated half pyramid"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=n-i+1){
                cout<<'*';
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //Floyd's Triangle Pattern
    cout<<"Floyd's Triangle Pattern"<<endl;
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    //diamond pattern
    cout<<"Diamond pattern"<<endl;
    //1st half pyramid
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2nd half pyramid
    for(int i=n;i>=1;i--){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //butterfly pattern 
    cout<<"butterfly pattern"<<endl;
    //1st half
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2nd half
    for(int i=n;i>=1;i--){
        //stars
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    //0-1 triangle pattern
    cout<<"0-1 triangle pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2!=0){
                    cout<<"0";
                }
                else{
                    cout<<"1";
                }
            }
            else{
                if(j%2!=0){
                    cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
        }
        cout<<endl;
    }
    //rhombus pattern
    cout<<"rhombus pattern"<<endl;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //pallindromic pattern
    cout<<"pallindromic pattern"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=2;j--){
            cout<<j;
        }
        cout<<"1";
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
