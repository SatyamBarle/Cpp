#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];
    return arr[idx]+f(arr,idx+1,n);
}
int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Sum of array elements is : ";
cout<<f(arr,0,n)<<endl;
}