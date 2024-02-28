#include<iostream>
using namespace std;
int main(){
    int a[]={0,2,3,4,8} ;
    int sum =0;
    for(int i=0;i<5;i++){
        sum = sum + a[i];
}
int sum2=0;
for (int j=0; j<5;j++){
    sum2 = sum2 + a[j];
    if( sum2*2 == sum){
        cout<<" partition exist ";
        break;
    }
    else{
        cout<<"partition doesnot exist ";
    }
}
 return 0;
}