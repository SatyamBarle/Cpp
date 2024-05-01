#include<iostream>
using namespace std;
int f(int x){
   int y;
  if(x%2==0) y=-x;
  else y=x;
  int ans;
  if(x==0) ans=0;
  else
    ans= f(x-1)+ y;
    return ans ;
}
int main(){
 int n=5;
 cout<<f(10)<<endl;
 return 0;
}