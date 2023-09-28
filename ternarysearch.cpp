#include<iostream>
using namespace std;

int tentivesearch(int arr[],int low,int high,int x){
    int mid1=low+(high-low)/3;
    int mid2=high-(high-low)/3;
    if(arr[mid1]==x){
           return mid1;
    }else if(arr[mid2]==x){
          return mid2;
    }else if(arr[mid1]>x){
        return tentivesearch(arr,low,mid1-1,x);
    }else if(arr[mid2]<x){
        return tentivesearch(arr,mid2-1,high,x);
    }else{
        return tentivesearch(arr,mid1-1,mid2-1,x) ;
    }
return -1;  



}
int main(){
    int arr[]={1,2,3,8,10,14,17,18,19};
    int x=3;
    int low=0;
    int high=9;
     int r=tentivesearch(arr,low,high,x);
     if(r==-1){
        cout<<"element not foumd";
     }else{
        cout<<"element at"<<r;
     }
     return 0;

}