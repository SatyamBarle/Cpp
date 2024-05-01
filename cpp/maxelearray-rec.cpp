#include<iostream>
using namespace std;
 int f(int *arr,int idx, int n){
    if(idx==n-1) return arr[idx];
   // if(arr[idx]>f(arr,idx+1,n)) return arr[idx] ;
   // else return f(arr,idx+1,n); 
  return max(arr[idx],f(arr,idx+1,n));
}
int main(){
 int arr[]={5,3,6,7,9,2};
 int n=6;
 cout<<f( arr,0,n );
}