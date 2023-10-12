#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int j=0;j<5;j++){
    for(int i=0;i<=n;i++){
        
    cout<<"*";
    }
    cout<<"*"<<endl;
    }

    for(int k=1;k<=n;k++){
        for(int i=0;i<=k-1;i++){
            cout<<"*";
        }
        cout<<endl;

    }
 return 0;
}
