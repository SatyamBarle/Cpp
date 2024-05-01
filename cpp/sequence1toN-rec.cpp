#include<iostream>
using namespace std;
int f(int x,int n){
    if(x==n ) {
        cout<<x<<endl;
        return x;}
   cout<<x<<" ";
   f(x+1,n);
  
}
int main(){
    int n=5;
    f(1,n);
}