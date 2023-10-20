#include<iostream>
using namespace std;

int main(){
    int a=9,b,c,*p=&b,*h=&c;
    int *x;
    x=&a;
    cout<<&a<<endl<<*x;
    cin>>b;
    cin>>c;
    *p=*p+*h;
    *h=*p-*h;
    *p=*p-*h;
    cout<<*p<<*h;





}