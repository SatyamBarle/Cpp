#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int digits=0;
  while(temp>0){
    digits ++;
    temp=temp/10;
  }
  cout<<digits<<endl;
  
   int tempp=n;
   int ans=0;
 while(tempp>0){
 ans= ans +  pow((tempp%10),digits);
    tempp=tempp/10;
  }
  if(n==ans) {cout<<"yes"<<endl;}
  else {cout<<"no"<<endl;}
  return 0;
}