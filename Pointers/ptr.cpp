#include<bits/stdc++.h>
using namespace std;

//call by value
void callByVal(int x){
    x=4;
    cout<<x<<endl;
}
//call by reference 
//using pointer
void callByRefusingPtr(int *p){
    *p=7;
    cout<<*p<<endl;
}
//call by reference 
//using reference variable
void callByRefusingRefVar(int &rf){
    rf=10;
    cout<<rf<<endl;
}

int main(){
    int a=10;
    //pointer
    int *ptr=&a;// & is addressOf operator
    //pointer of pointer
    int **pptr=&ptr;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<pptr<<endl;
    //* is dereference operator
    cout<<*ptr<<endl;
    cout<<**pptr<<endl;
    cout<<sizeof(ptr)<<endl;
    //null pointer 
    int *np=NULL; //same as int *np=0;
    cout<<np<<endl;
    int x=5;
    //call by value
    callByVal(x);
    cout<<x<<endl;
    //call by reference
    //using pointer
    callByRefusingPtr(&x);
    cout<<x<<endl;
    //using reference variable (alias name)
    callByRefusingRefVar(x);
    cout<<x<<endl;
}