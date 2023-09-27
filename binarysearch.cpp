#include<iostream>
using namespace std;

int binarysearch(int arr[],int high,int low,int x){
      while(low<=high){
       int mid=low+(high-low)/2;
       if(arr[mid]==x){
        return mid;
       }else if(arr[mid]>x){
          high=mid-1;
       }else if(arr[mid]<x){
        low=mid+1;

       }
      }
      return -1;
}
int main(){
    int arr[]={1,2,3,4,6,8,10};
    int x=4;
    int low=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1;
    int result=binarysearch(arr,high,low,x);
    if(result==-1){
        cout<<"nf";
    }else{
        cout<<"found at"<<result;
    }
    return 0;



}