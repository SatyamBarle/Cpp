#include<iostream>
using namespace std;
int power(int p,int q){
   // if (power(p,1)) return p;
    if (q==0) return 1;
    return (power(p,q-1))*p ;

}
int main(){
    cout<<power(2543,4)<<endl;
    cout<<"6"<<endl;
    return 0;


}