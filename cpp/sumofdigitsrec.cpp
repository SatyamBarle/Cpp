#include<iostream>
using namespace std;
int f(int n){
    if(n>=0 && n<=9) return n;
    int ans=f(n/10)+ (n%10);
    return ans ;
}
int main(){
    cout<<f(123456789)<<endl;
    return 0;
    
}