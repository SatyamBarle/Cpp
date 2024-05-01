#include<iostream>
using namespace std;
int f(int n, int k){
    if(k==1){
         cout<<n<<",";
         return n; }
    f(n,k-1);
    cout<<n*k<<",";
}
int main(){
 f(5,4);
 return 0;
}