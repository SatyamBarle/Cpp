#include<iostream>
using namespace std;
int F(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    int ans=F(n-1)+F(n-2);
    return ans;
}
int main(){
int result=F(3);
cout<<result<<endl;
return 0;

}