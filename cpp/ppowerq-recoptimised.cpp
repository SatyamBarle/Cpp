#include<iostream>
using namespace std;
int f(int p,int q){
    if(q==0) return 1;
    if(q%2==0){
        // q is odd 
        int res= f(p,q/2);
        return res*res;
    }
    else{
        // q is odd 
        int res= f(p,(q-1)/2);
        return p*res*res;
        
    }
}
int main(){
    int res=f(2,5);
    cout<<res;
    return 0;
}