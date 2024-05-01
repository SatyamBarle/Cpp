#include<iostream>
#include<cmath>
using namespace std;
int f(int x, int y){
    if(x==0) return 0;
    
 return f(x/10,y)+ pow(x%10,y);
}
int main(){
 int n;
 cin>>n;
 int d=0;
 int temp=n;
 while(temp>0){
     d++;
   temp=temp/10;
   
 }
 int result= f(n,d);
  if(result==n) cout << "true";
 else cout << "false";
 return 0;
}