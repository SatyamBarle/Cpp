#include<iostream>
using namespace std;
void  f(int idx, int *arr, int n){
    if(idx==n) return; //base case
   cout<<arr[idx]<<endl; // selfwork
   f(idx+1,arr,n);// assumption 
}
int main(){
    int n=5;
    int a[n]={1,3,2,4,5};
    f(0,a,n);

}