#include<iostream>
using namespace std;
int main(){
    int a[]={0,5,1,2,3,4};
 for(int i=0;i<5;i++){
a[i]+=a[i-1];
// created prefix sum array 
 }
 int q;
 cin>>q;
 while(q--){
    int l,r;
    cin>>l>>r;
    int ans = a[r]-a[l-1];
    cout<<ans<<endl;
 }
 return 0;
 
}