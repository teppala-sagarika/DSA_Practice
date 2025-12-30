#include<bits/stdc++.h>
using namespace std;

//forward declaration
int prod(int a,int b);

//factorial 
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}

//binary coefficient nCr
double nCr(int n,int r){
    int x=fact(n);
    int y=fact(r);
    int z=fact(n-r);
    return x/(y*z);
}

//function overloading
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
double sum(double a,double b){
    return a+b;
}

int main(){
    cout<<"prod="<<prod(5,8)<<endl;
    cout<<"fact="<<fact(5)<<endl;
    cout<<"nCr="<<nCr(6,2)<<endl;
    cout<<"func overloading"<<endl;
    cout<<sum(5,4)<<endl;
    cout<<sum(1,4,3)<<endl;
    cout<<sum(3.5,7.2)<<endl;
}

int prod(int a,int b){
    return a*b;
}
